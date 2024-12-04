using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Data.SQLite;
using System.IO;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        string databasePath;
        string connectionString;
        int titleID;
        int empID;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            databasePath = @"C:\Users\berat\Yedeklenecekler\Repos\KBU-Files\3rd-Year\Visual-Programming\10th-week\WindowsFormsApp1\WindowsFormsApp1\bin\Debug\P_InformationDB.db";
            connectionString = $"DataSource={databasePath}";
            //CreateDatabase();
            CreateTables();
        }

        private void CreateDatase()
        {
            if (!File.Exists(databasePath))
            {
                SQLiteConnection.CreateFile(databasePath);
            }
        }

        private void CreateTables()
        {
            using (var SQLconnect = new SQLiteConnection(connectionString))
            {
                SQLconnect.Open();
                using (var SQLCommand = SQLconnect.CreateCommand())
                {
                    SQLCommand.CommandText = "";
                }
            }
        }
    }
}
