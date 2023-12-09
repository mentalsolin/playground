using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _9_13_23_2
{
    public partial class Form1 : Form
    {
        public static System.Drawing.Point Position { get; set; }

        int x1, y1;
        public Form1()
        {
            InitializeComponent();
            this.StartPosition = FormStartPosition.Manual;
            this.Location = new Point(300, 0);
        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {

        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            x1 = e.X; y1 = e.Y;
        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            Panel panel1 = new Panel();
            
            panel1.Width = e.X - x1;
            panel1.Height = e.Y - y1;
            panel1.BackColor = Color.Blue;
            this.Controls.Add(panel1);
        }

        private void panel1_MouseUp(object sender, MouseEventArgs e)
        {

        }
    }
}
