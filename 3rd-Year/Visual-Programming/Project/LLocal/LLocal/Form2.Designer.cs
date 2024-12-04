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
            this.gradientBG1 = new LLocal.GradientBG();
            this.SuspendLayout();
            // 
            // kryptonPalette1
            // 
            this.kryptonPalette1.ButtonSpecs.FormClose.Image = global::LLocal.Properties.Resources.Basic_red_dot2;
            this.kryptonPalette1.ButtonSpecs.FormMax.Image = global::LLocal.Properties.Resources.GAudit_YellowDot1;
            this.kryptonPalette1.ButtonSpecs.FormMin.Image = global::LLocal.Properties.Resources.Basic_green_dot1;
            // 
            // gradientBG1
            // 
            this.gradientBG1.Angle = 93F;
            this.gradientBG1.Color0 = System.Drawing.Color.Blue;
            this.gradientBG1.Color1 = System.Drawing.Color.Orange;
            this.gradientBG1.Location = new System.Drawing.Point(-2, -5);
            this.gradientBG1.Name = "gradientBG1";
            this.gradientBG1.Size = new System.Drawing.Size(957, 539);
            this.gradientBG1.TabIndex = 0;
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(953, 534);
            this.Controls.Add(this.gradientBG1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form2";
            this.Palette = this.kryptonPalette1;
            this.PaletteMode = ComponentFactory.Krypton.Toolkit.PaletteMode.Custom;
            this.ResumeLayout(false);

        }

        #endregion

        private ComponentFactory.Krypton.Toolkit.KryptonPalette kryptonPalette1;
        private GradientBG gradientBG1;
    }
}