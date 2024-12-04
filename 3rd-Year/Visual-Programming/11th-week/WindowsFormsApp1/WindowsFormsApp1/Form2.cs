using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SQLite;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace WindowsFormsApp1
{
    public partial class Form2 : Form
    {
        string connectionString;
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            connectionString = "Data Source=P_Information.db;Version=;";
            string query = "SELECT JobTitle, JobTitleID FROM JobTitle";

            using (SQLiteConnection conn = new SQLiteConnection(connectionString))
            {
                try
                {
                    conn.Open();
                    SQLiteCommand cmd = new SQLiteCommand(query, conn);
                    SQLiteDataReader reader = cmd.ExecuteReader();

                    chart1.Series.Clear();
                    chart1.Series.Add("Personal ID");
                    chart1.Series["Personel ID"].ChartType = SeriesChartType.Column;

                    while (reader.Read()) 
                    {
                        string category = reader["JobtTitle"].ToString();
                        double value = Convert.ToDouble(reader["JobTitleID"]);
                        chart1.Series["Personel ID"].Points.AddXY(category, value);
                    }

                    reader.Close();
                    conn.Close();
                }
            }

        }
    }
}
