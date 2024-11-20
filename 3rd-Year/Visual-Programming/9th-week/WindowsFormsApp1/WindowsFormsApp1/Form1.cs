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

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add("Nerede: ");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int total = 0;
            if (radioButton3.Checked && !radioButton4.Checked)
            {
                total += Convert.ToInt32(comboBox3.Text)*50;
            } 
            else if (radioButton4.Checked && !radioButton3.Checked)
            {
                total += Convert.ToInt32(comboBox4.Text)*75;
            }
            else if (radioButton3.Checked && radioButton4.Checked)
            {
                total += Convert.ToInt32(comboBox3.Text)*50 + Convert.ToInt32(comboBox4.Text)*75;
            }
            else
            {
                MessageBox.Show("Radio buttonlar seçilmedi");
            }
            MessageBox.Show("Ücret: " + Convert.ToString(total));
            listBox1.Items.Add((int)total);
        }
    }
}
