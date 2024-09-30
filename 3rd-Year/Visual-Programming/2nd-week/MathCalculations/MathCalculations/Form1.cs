using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;

namespace MathCalculations
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            double kenar = Convert.ToDouble(textBox1.Text);
            double alan = kenar * kenar;
            label3.Text = Convert.ToString(alan);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            groupBox1.Visible = true;
            groupBox2.Visible = false;
            groupBox1.BringToFront();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            groupBox1.Visible = false;
            groupBox2.Visible = true;
            groupBox2.BringToFront();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            double uzunKenar = Convert.ToDouble(textBox2.Text);
            double kisaKenar = Convert.ToDouble(textBox3.Text);
            double alan = uzunKenar * kisaKenar;
            label4.Text = Convert.ToString(alan);
        }
    }
}
