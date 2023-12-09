using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace _9_13
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }
        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {

                MessageBox.Show("clicked to form");
            }
            else if (e.Button == MouseButtons.Right)
            {
                this.Text = "Window width: " + Width.ToString() + " Window Height: " + Height.ToString();
            }
        }

        private void panel1_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.X < 10 || e.X == ClientSize.Width - 10 || 
                e.Y < 10 || e.Y == ClientSize.Height - 10) {
                MessageBox.Show("clicked to border of the panel");

            }
            else
            {

                if (MouseButtons.Left == e.Button && ModifierKeys == Keys.Control) {
                    MessageBox.Show("clicked to panel with control");
                }
                else if (e.Button == MouseButtons.Left ) {
                    MessageBox.Show("clicked to panel");
                }
            }

            if (e.Button == MouseButtons.Right)
            {
                this.Text = "Window width: " + Width.ToString() + " Window Height: " + Height.ToString();
            }

        }

        private void Form1_Move(object sender, EventArgs e)
        {
            
        }

        private void panel1_MouseMove(object sender, MouseEventArgs e)
        {
            this.Text = e.Location.ToString();
            Thread.Sleep(100);
        }
    }
}
