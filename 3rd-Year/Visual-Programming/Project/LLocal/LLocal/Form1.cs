﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ComponentFactory.Krypton.Toolkit;

namespace LLocal
{
    public partial class Form1 : KryptonForm
    {
        public Point mouseLocation;
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void mouse_Down(object sender, MouseEventArgs e)
        {
            mouseLocation = new Point(-e.X, -e.Y);
        }

        private void mouse_Move(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                Point mousePose = Control.MousePosition;
                mousePose.Offset(mouseLocation.X, mouseLocation.Y);
                Location = mousePose;
            }

        }

        private void label5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void forgotMyPassword_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 1;
        }

        private void signUpButton_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 2;
        }

        private void kryptonButton1_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 0;
        }

        private void returnLogin3_Click(object sender, EventArgs e)
        {
            tabControl.SelectedIndex = 0;
        }

        private void loginButton_Click(object sender, EventArgs e)
        {
            this.Hide();
            Form2 form2 = new Form2();
            form2.Show();
        }
    }
}
