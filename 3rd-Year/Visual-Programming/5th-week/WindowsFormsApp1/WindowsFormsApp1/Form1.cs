using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        const double pi = 3.14;

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double r =  Convert.ToDouble(textBox1.Text);
            double alan = pi * r * r;
            label2.Text = Convert.ToString(alan);
            label3.Text = "Dairenin alani " + Convert.ToString(alan);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            double r = Convert.ToDouble(textBox1.Text);
            double cevre = 2 * pi * r;
            label2.Text = Convert.ToString(cevre);
            label3.Text = "Dairenin cevresi " + Convert.ToString(cevre);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
