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

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string id, name, surname, p_number, job;

            id = textBox1.Text;
            name = textBox2.Text;
            surname = textBox3.Text;
            p_number = textBox4.Text;
            job = textBox5.Text;

            string[] column = { id, name, surname, p_number, job};

            ListViewItem record = new ListViewItem(column);

            listView1.Items.Add(record);

        }
    }
}
