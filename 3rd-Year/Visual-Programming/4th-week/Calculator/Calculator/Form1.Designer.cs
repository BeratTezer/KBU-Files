namespace Calculator
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.pcBox_Author = new System.Windows.Forms.PictureBox();
            this.Username = new System.Windows.Forms.Label();
            this.Password = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.btn = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pcBox_Author)).BeginInit();
            this.SuspendLayout();
            // 
            // pcBox_Author
            // 
            this.pcBox_Author.Image = global::Calculator.Properties.Resources.GZPRr6AXIAAWbTf;
            this.pcBox_Author.Location = new System.Drawing.Point(43, 44);
            this.pcBox_Author.Name = "pcBox_Author";
            this.pcBox_Author.Size = new System.Drawing.Size(180, 163);
            this.pcBox_Author.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pcBox_Author.TabIndex = 0;
            this.pcBox_Author.TabStop = false;
            // 
            // Username
            // 
            this.Username.AutoSize = true;
            this.Username.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Username.Location = new System.Drawing.Point(268, 66);
            this.Username.Name = "Username";
            this.Username.Size = new System.Drawing.Size(91, 20);
            this.Username.TabIndex = 1;
            this.Username.Text = "Username";
            // 
            // Password
            // 
            this.Password.AutoSize = true;
            this.Password.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Password.Location = new System.Drawing.Point(268, 117);
            this.Password.Name = "Password";
            this.Password.Size = new System.Drawing.Size(86, 20);
            this.Password.TabIndex = 2;
            this.Password.Text = "Password";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(384, 68);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(147, 20);
            this.textBox1.TabIndex = 3;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(384, 119);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(147, 20);
            this.textBox2.TabIndex = 4;
            // 
            // btn
            // 
            this.btn.Location = new System.Drawing.Point(411, 184);
            this.btn.Name = "btn";
            this.btn.Size = new System.Drawing.Size(75, 23);
            this.btn.TabIndex = 5;
            this.btn.Text = "Sign-In";
            this.btn.UseVisualStyleBackColor = true;
            this.btn.Click += new System.EventHandler(this.btn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btn);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.Password);
            this.Controls.Add(this.Username);
            this.Controls.Add(this.pcBox_Author);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pcBox_Author)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pcBox_Author;
        private System.Windows.Forms.Label Username;
        private System.Windows.Forms.Label Password;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Button btn;
    }
}

