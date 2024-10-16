using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (_clear_screen == true)
            {
                Scree_Label.Text = "";
                _clear_screen = false;
            }
            if (Screen_Label.Text == "0") Screen_Label.Text = "";
            Screen_Label. = 
        }
    }
}
