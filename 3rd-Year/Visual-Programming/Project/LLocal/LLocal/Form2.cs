using Ollama.Core;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ComponentFactory.Krypton.Toolkit;
using System.Threading;
using System.Diagnostics;
using System.IO;
using System.Web.Security;
using System.Data.SQLite;
using System.Windows.Forms.DataVisualization.Charting;

namespace LLocal
{
    public partial class Form2 : KryptonForm
    {
        string currUsername;
        private DateTime startTime;    
        int userId;
        string databasePath;
        string connectionString;
        int index = 0;
        public Form2(string username, int userIdIn)
        {
            databasePath = @"C:\Users\berat\Yedeklenecekler\Repos\KBU-Files\3rd-Year\Visual-Programming\Project\LLocal\LLocal\bin\Debug\database.db";
            connectionString = $"DataSource={databasePath}";
            StartCmdSession(); 
            currUsername = username;
            InitializeComponent();
            LoadChartData();
            timer2.Start();
            userSession.Start();
            startTime = DateTime.Now;
            userId = userIdIn;
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            index++;
            homeWidget.SelectedIndex = index % 4;
        }

        private void pictureBox12_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/blob/main/README.md";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox17_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/blob/main/docs/faq.md"; 
            System.Diagnostics.Process.Start(url);  
        }

        private void pictureBox18_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library";
            System.Diagnostics.Process.Start(url); 
        }

        private void pictureBox21_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/issues/2916"; 
            System.Diagnostics.Process.Start(url);  
        }

        private void pictureBox16_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.3";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox25_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/qwq";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox26_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.2-vision";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox27_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/nomic-embed-text";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox28_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/mistral";
            System.Diagnostics.Process.Start(url);
        }

        private void panel10_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 0;

        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 0;

        }

        private void label2_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 0;

        }

        private void panel16_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 1;

        }

        private void label9_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 1;

        }

        private void pictureBox11_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 1;

        }

        private void pictureBox3_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 2;
        }

        private void label4_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 2;

        }

        private void panel11_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 2;
        }

        private void panel12_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 3;

        }

        private void label5_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 3;
        }

        private void pictureBox4_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 3;
        }

        private void modelsCombBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            modelLabel.Text = modelsCombBox.Text;   
        }

        private void panel13_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 4;

        }

        private void label6_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 4;

        }

        private void pictureBox5_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 4;
        }

        private void LoadChartData()
        {
            chart1.Series.Clear();
            chart1.ChartAreas.Clear();

            var chartArea = new ChartArea
            {
                Name = "ChartArea1",
                AxisX = { Title = "Date", IntervalAutoMode = IntervalAutoMode.VariableCount },
                AxisY = { Title = "Hours", Interval = 1 }
            };
            chart1.ChartAreas.Add(chartArea);

            var series = new Series
            {
                Name = "App Usage",
                ChartType = SeriesChartType.Column,
                XValueType = ChartValueType.DateTime
            };
            chart1.Series.Add(series);

            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();

                // Query to filter data by userId
                string query = "SELECT date, appTime FROM data WHERE userId = @userId";

                using (var command = new SQLiteCommand(query, connection))
                {
                    // Set the userId parameter
                    command.Parameters.Add("@userId", DbType.String).Value = userId;

                    using (var reader = command.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            DateTime date = Convert.ToDateTime(reader["date"]);
                            double appTime = Convert.ToDouble(reader["appTime"]);

                            series.Points.AddXY(date, appTime);
                        }
                    }
                }
            }

            chart1.ChartAreas[0].AxisX.LabelStyle.Format = "dd/MM/yyyy";
            chart1.ChartAreas[0].AxisX.Interval = 1;
            chart1.ChartAreas[0].AxisY.Interval = 1;

            chart1.Legends.Clear();
        }


        private void pictureBox37_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 2;
        }

        private void pictureBox1_MouseHover(object sender, EventArgs e)
        {
            pictureBox1.Image = LLocal.Properties.Resources.X;
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();
                string query = @"
                INSERT INTO data (userId, date, appTime) 
                VALUES (@userId, @date, @sessionTime);";

                using (var command = new SQLiteCommand(query, connection))
                {
                    command.Parameters.Add("@userId", DbType.String).Value = userId;
                    command.Parameters.Add("@date", DbType.String).Value = DateTime.Now.ToString("dd/MM/yyyy");
                    command.Parameters.Add("@sessionTime", DbType.Int64).Value = DateTime.Now - startTime;

                    try
                    {
                        command.ExecuteNonQuery();
                        MessageBox.Show("Session data saved successfully!");
                    }
                    catch (SQLiteException ex)
                    {
                        MessageBox.Show("Error saving session data: " + ex.Message);
                    }
                }
            }   

            Application.Exit();
        }

        private void pictureBox1_MouseLeave(object sender, EventArgs e)
        {
            pictureBox1.Image = LLocal.Properties.Resources.logo_silhouette_7;
        }

        private void pictureBox33_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.3";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox32_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/qwq";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox31_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.2-vision";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox30_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/nomic-embed-text";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox29_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/mistral";
            System.Diagnostics.Process.Start(url);
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            label3.Text = currUsername;
        }

        private void label3_Click(object sender, EventArgs e)
        {
            string url = $"https://github.com/{currUsername}";
            System.Diagnostics.Process.Start(url);
        }

        // // // // 

        private Process process;


        private void pictureBox42_Click(object sender, EventArgs e)
        {

            string command = textBoxCommand.Text.Trim();

            if (!string.IsNullOrEmpty(command))
            {
                SendCommandToSession(command);
                textBoxCommand.Clear();
            }
        }

        private void SendCommandToSession(string command)
        {
            try
            {
                if (process != null && !process.HasExited)
                {
                    process.StandardInput.WriteLine(command); 
                    process.StandardInput.Flush(); 
                }
                else
                {
                    MessageBox.Show("Komut satırı oturumu kapalı. Yeniden başlatılıyor...", "Bilgi");
                    StartCmdSession(); 
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Hata: {ex.Message}", "Hata", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void Process_OutputDataReceived(object sender, DataReceivedEventArgs e)
        {
            if (!string.IsNullOrEmpty(e.Data))
            {
                AppendTextToOutput(e.Data);
            }
        }

        private void Process_ErrorDataReceived(object sender, DataReceivedEventArgs e)
        {
            if (!string.IsNullOrEmpty(e.Data))
            {
                AppendTextToOutput($"[HATA]: {e.Data}");
            }
        }
        private void AppendTextToOutput(string text)
        {
            if (answerBox == null)
            {
                //MessageBox.Show("RichTextBox tanımlı değil!", "Hata", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return;
            }

            if (answerBox.InvokeRequired)
            {
                answerBox.Invoke(new Action(() => answerBox.AppendText(text + Environment.NewLine)));
            }
            else
            {
                answerBox.AppendText(text + Environment.NewLine);
            }
        }

        private void StartCmdSession()
        {
            try
            {
                process = new Process
                {
                    StartInfo = new ProcessStartInfo
                    {
                        FileName = "cmd.exe", 
                        RedirectStandardInput = true,
                        RedirectStandardOutput = true,
                        RedirectStandardError = true,
                        UseShellExecute = false,
                        CreateNoWindow = true,
                        StandardOutputEncoding = Encoding.UTF8,
                        StandardErrorEncoding = Encoding.UTF8
                    },
                    EnableRaisingEvents = true
                };

                process.OutputDataReceived += Process_OutputDataReceived;
                process.ErrorDataReceived += Process_ErrorDataReceived;

                process.Start();
                process.BeginOutputReadLine();
                process.BeginErrorReadLine();
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Hata: {ex.Message}", "Hata", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }



        private void timer1_Tick(object sender, EventArgs e)
        {

        }
    }
}
