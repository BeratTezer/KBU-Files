using System.Drawing;
using System.Windows.Forms;
using System.Drawing.Drawing2D;

namespace LLocal
{
    public partial class CustomButton : UserControl
    {
        public CustomButton() { }
        protected override void OnPaint(PaintEventArgs e) 
        {
            Graphics gp = new GraphicsPath();
            base.OnPaint(e);
        }
        
    }
}
