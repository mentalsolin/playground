using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Font f = new Font("Times New Roman", 20, FontStyle.Bold);
            g.DrawString("Hello world!", f, Brushes.Blue, 20, 10);

            g.DrawImage(Image.FromFile(@"D:\WindowsFormsApp2\img.png"), 15, 15);
        }
    }
}
