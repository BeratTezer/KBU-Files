namespace LLocal
{
    partial class Form2
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.kryptonPalette1 = new ComponentFactory.Krypton.Toolkit.KryptonPalette(this.components);
            this.panel1 = new System.Windows.Forms.Panel();
            this.customButton1 = new LLocal.CustomButton();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // kryptonPalette1
            // 
            this.kryptonPalette1.ButtonSpecs.FormClose.Image = global::LLocal.Properties.Resources.Basic_red_dot2;
            this.kryptonPalette1.ButtonSpecs.FormMax.Image = global::LLocal.Properties.Resources.GAudit_YellowDot1;
            this.kryptonPalette1.ButtonSpecs.FormMin.Image = global::LLocal.Properties.Resources.Basic_green_dot1;
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.customButton1);
            this.panel1.Location = new System.Drawing.Point(-5, -2);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(965, 545);
            this.panel1.TabIndex = 0;
            // 
            // customButton1
            // 
            this.customButton1.BorderRadius = 50;
            this.customButton1.Color0 = System.Drawing.Color.BlueViolet;
            this.customButton1.Color1 = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.customButton1.Location = new System.Drawing.Point(-18, -24);
            this.customButton1.Name = "customButton1";
            this.customButton1.Size = new System.Drawing.Size(983, 569);
            this.customButton1.TabIndex = 0;
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(953, 534);
            this.Controls.Add(this.panel1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form2";
            this.Palette = this.kryptonPalette1;
            this.PaletteMode = ComponentFactory.Krypton.Toolkit.PaletteMode.Custom;
            this.panel1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private ComponentFactory.Krypton.Toolkit.KryptonPalette kryptonPalette1;
        private System.Windows.Forms.Panel panel1;
        private CustomButton customButton1;
    }
}