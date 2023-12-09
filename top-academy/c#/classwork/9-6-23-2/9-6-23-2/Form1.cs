using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _9_6_23_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
/*            this.Hide();
            //button for creation new window
            Form2 form2 = new Form2();
            form2.ShowDialog();*/



        }
        private void button2_Click(object sender, EventArgs e)
        {
            if (MouseButtons.Right == press)
            {
                MessageBox.Show("left");
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {

        }

        private void move(object sender, MouseEventArgs e)
        {
            Random rnd = new Random();

            button2.Top -= e.Y;
        }
    }
}
