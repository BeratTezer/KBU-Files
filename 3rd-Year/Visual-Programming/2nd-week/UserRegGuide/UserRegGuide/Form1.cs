using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace UserRegGuide
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "Tıkladın o7";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label2.Text = "Hatrım kalırdı";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text  = label1.Text;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }
    }
}
