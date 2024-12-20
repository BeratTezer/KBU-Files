using ComponentFactory.Krypton.Toolkit;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LLocal
{
    public partial class Form3 : KryptonForm
    {
        string currUsername;
        int currUserId;
        public Form3(string username, int userId)
        {
            currUsername = username;
            currUserId = userId;
            InitializeComponent();
            timer1.Start();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            Form2 form2 = new Form2(currUsername, currUserId);
            form2.Show();
            this.Hide();
            timer1.Stop();
        }
    }
}
