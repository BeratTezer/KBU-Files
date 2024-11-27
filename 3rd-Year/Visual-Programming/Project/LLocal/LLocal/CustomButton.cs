using System.Drawing;
using System.Windows.Forms;
using System.Drawing.Drawing2D;
using System.ComponentModel;

namespace LLocal
{
    [DefaultEvent("Click")]
    public partial class CustomButton : UserControl
    {
        int wh = 20;
        float ang = 45;
        Color cl0 = Color.Blue, cl1 = Color.Orange;
        Timer t = new Timer();
        public CustomButton()
        {
            DoubleBuffered = true;
            t.Interval = 60;
            t.Start();
            t.Tick += (s, e) => { ang = ang % 360 + 1; };
        }

        public float Angle
        {
            get { return ang; }
            set { ang = value; Invalidate(); }
        }
        
        public int BorderRadius
        {
            get { return wh; }
            set { wh = value; Invalidate(); }
        }

        public Color Color0
        {
            get { return cl0; }
            set { cl0 = value; Invalidate(); }
        }
        public Color Color1
        {
            get { return cl1; }
            set { cl1 = value; Invalidate(); }
        }

        protected override void OnPaint(PaintEventArgs e) 
        {
            e.Graphics.SmoothingMode = SmoothingMode.HighQuality;
            GraphicsPath gp = new GraphicsPath();

            gp.AddArc(new Rectangle(0, 0, wh, wh), 180, 90);
            gp.AddArc(new Rectangle(Width - wh, 0, wh, wh), -90, 90);
            gp.AddArc(new Rectangle(Width - wh, Height - wh , wh, wh), 0, 90);
            gp.AddArc(new Rectangle(0, Height - wh, wh, wh), 90, 90);

            e.Graphics.FillPath(new LinearGradientBrush(ClientRectangle, cl0, cl1 , ang), gp);
            base.OnPaint(e);
        }


    }
}
