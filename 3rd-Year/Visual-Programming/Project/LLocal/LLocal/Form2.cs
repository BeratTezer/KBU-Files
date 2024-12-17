using Ollama.Core;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ComponentFactory.Krypton.Toolkit;
using System.Threading;

namespace LLocal
{
    public partial class Form2 : KryptonForm
    {
        int index = 0;
        public Form2()
        {
            InitializeComponent();
            timer2.Start();
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            index++;
            homeWidget.SelectedIndex = index % 4;
        }

        private void pictureBox12_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/blob/main/README.md";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox17_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/blob/main/docs/faq.md"; 
            System.Diagnostics.Process.Start(url);  
        }

        private void pictureBox18_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library";
            System.Diagnostics.Process.Start(url); 
        }

        private void pictureBox21_Click(object sender, EventArgs e)
        {
            string url = "https://github.com/ollama/ollama/issues/2916"; 
            System.Diagnostics.Process.Start(url);  
        }

        private void pictureBox16_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.3";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox25_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/qwq";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox26_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/llama3.2-vision";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox27_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/nomic-embed-text";
            System.Diagnostics.Process.Start(url);
        }

        private void pictureBox28_Click(object sender, EventArgs e)
        {
            string url = "https://ollama.com/library/mistral";
            System.Diagnostics.Process.Start(url);
        }

        private void panel10_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 0;
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 0;
        }

        private void label2_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 0;
        }

        private void panel16_Paint(object sender, PaintEventArgs e)
        {
            homeTabControl.SelectedIndex = 1;
        }

        private void label9_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 1;
        }

        private void pictureBox11_Click(object sender, EventArgs e)
        {
            homeTabControl.SelectedIndex = 1;
        }
    }
}
