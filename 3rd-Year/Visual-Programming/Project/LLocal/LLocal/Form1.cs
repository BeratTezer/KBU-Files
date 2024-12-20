using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SQLite;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;
using ComponentFactory.Krypton.Toolkit;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ListView;

namespace LLocal
{
    public partial class Form1 : KryptonForm
    {
        public Point mouseLocation;
        string databasePath;
        string connectionString;

        public Form1()
        {
            databasePath = @"C:\Users\berat\Yedeklenecekler\Repos\KBU-Files\3rd-Year\Visual-Programming\Project\LLocal\LLocal\bin\Debug\database.db";
            connectionString = $"DataSource={databasePath}";

            CreateDatase();

            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void mouse_Down(object sender, MouseEventArgs e)
        {
            mouseLocation = new Point(-e.X, -e.Y);
        }

        private void mouse_Move(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                Point mousePose = Control.MousePosition;
                mousePose.Offset(mouseLocation.X, mouseLocation.Y);
                Location = mousePose;
            }

        }

        private void label5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void forgotMyPassword_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 1;
        }

        private void signUpButton_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 2;
        }

        private void kryptonButton1_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 0;
        }

        private void returnLogin3_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 0;
        }

        private void loginButton_Click(object sender, EventArgs e)
        {
            string userId = null; 

            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();
                string query = "SELECT userId FROM users WHERE username = @username";

                using (var command = new SQLiteCommand(query, connection))
                {
                    command.Parameters.Add("@username", DbType.String).Value = username;

                    using (var reader = command.ExecuteReader())
                    {
                        if (reader.Read())
                        {
                            userId = reader["userId"].ToString(); 
                        }
                    }
                }
            }
   
            string usernameLogin = username.Text;
            string passwordLogin = password.Text;
            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();
                string query = "SELECT * FROM Users WHERE Username = @Username AND Password = @Password";
                using (var cmd = new SQLiteCommand(query, connection))
                {
                    cmd.Parameters.AddWithValue("@Username", usernameLogin);
                    cmd.Parameters.AddWithValue("@Password", passwordLogin);

                    using (var reader = cmd.ExecuteReader())
                    {
                        if (reader.HasRows)
                        {
                            //MessageBox.Show("Giriş Başarılı!");

                            this.Hide();
                            Form3 form3 = new Form3(usernameLogin, userId);
                            form3.Show();
                        }
                        else
                        {
                            MessageBox.Show("Kullanıcı adı veya şifre hatalı!");
                        }
                    }
                }
            }

        }

        private void CreateDatase()
        {
            if (!File.Exists(databasePath))
            {
                SQLiteConnection.CreateFile(databasePath);
            }
        }
        private void Register3_Click(object sender, EventArgs e)
        {
            string username = username3.Text;
            string password = password3.Text;
            string mail = mail3.Text;

            databasePath = @"C:\Users\berat\Yedeklenecekler\Repos\KBU-Files\3rd-Year\Visual-Programming\Project\LLocal\LLocal\bin\Debug\database.db";
            connectionString = $"Data Source={databasePath};Version=3;";

            if (passwordAgain3.Text == password)
            {
                if (string.IsNullOrEmpty(username) || string.IsNullOrEmpty(password) || string.IsNullOrEmpty(mail))
                {
                    MessageBox.Show("Lütfen tüm alanları doldurun!");
                    return;
                }

                using (var SQLconnect = new SQLiteConnection(connectionString))
                {
                    SQLconnect.Open();

                    using (var checkCommand = SQLconnect.CreateCommand())
                    {
                        checkCommand.CommandText = "SELECT COUNT(*) FROM users WHERE username = @username";
                        checkCommand.Parameters.AddWithValue("@username", username);

                        var count = Convert.ToInt32(checkCommand.ExecuteScalar());
                        if (count > 0)
                        {
                            MessageBox.Show("Bu kullanıcı adı zaten mevcut. Lütfen başka bir kullanıcı adı seçin.");
                            return;
                        }
                    }
                    
                    using (var checkCommand = SQLconnect.CreateCommand())
                    {
                        checkCommand.CommandText = "SELECT COUNT(*) FROM users WHERE mail = @mail";
                        checkCommand.Parameters.AddWithValue("@mail", mail);

                        var count = Convert.ToInt32(checkCommand.ExecuteScalar());
                        if (count > 0)
                        {
                            MessageBox.Show("Bu mail adresi zaten mevcut. Lütfen başka bir mail adresi seçin.");
                            return;
                        }
                    }

                    using (var SQLCommand = SQLconnect.CreateCommand())
                    {
                        SQLCommand.CommandText = @"
                INSERT INTO users (username, password, mail) 
                VALUES (@username, @password, @email);";
                        SQLCommand.Parameters.Add("@username", DbType.String).Value = username;
                        SQLCommand.Parameters.Add("@password", DbType.String).Value = password;
                        SQLCommand.Parameters.Add("@email", DbType.String).Value = mail;

                        try
                        {
                            SQLCommand.ExecuteNonQuery();
                            MessageBox.Show("Kayıt Başarılı!");

                            tabControl.SelectedIndex = 0;
                        }
                        catch (SQLiteException ex)
                        {
                            MessageBox.Show("Kayıt sırasında bir hata oluştu: " + ex.Message);
                        }
                    }
                }
            }
            else
            {
                MessageBox.Show("Şifreler eşleşmiyor!");
            }
        }

        private void changeYourPasswordButton2_Click(object sender, EventArgs e)
        {
            string newPassword = newPassword2.Text;
            string username = username2.Text;

            if (newPassword == newPasswordAgain2.Text)
            {
                using (var SQLconnect = new SQLiteConnection(connectionString))
                {
                    SQLconnect.Open();
                    using (var SQLCommand = SQLconnect.CreateCommand())
                    {
                        SQLCommand.CommandText = @"
                            UPDATE users 
                            SET password = @newPassword 
                            WHERE username = @username;";
                        SQLCommand.Parameters.AddWithValue("@newPassword", newPassword);
                        SQLCommand.Parameters.AddWithValue("@username", username);

                        int rowsAffected = SQLCommand.ExecuteNonQuery();
                        if (rowsAffected > 0)
                        {
                            MessageBox.Show("Şifre sıfırlama başarılı!");

                            tabControl.SelectedIndex = 0;
                        }
                        else
                        {
                            MessageBox.Show("Geçersiz kullanıcı adı!");
                        }
                    }
                }
            } else
            {
                MessageBox.Show("Şifreler eşleşmiyor!");
            }
        }
    }
}
