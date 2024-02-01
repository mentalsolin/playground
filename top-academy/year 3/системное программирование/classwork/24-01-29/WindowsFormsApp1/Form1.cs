using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        Thread th1;
        Thread th2;
        Thread th3;
       
        public Form1()
        {
            InitializeComponent();

            th1 = new Thread(chars);
            th2 = new Thread(numbers);
            th3 = new Thread(any);
        }



        public void chars()
        {
            string test = "testing";
            textBox1.Text = test;
        }
        public void numbers()
        {
            string test = "testing";
            textBox2.Text = test;
        }
        public void any()
        {
            string test = "testing";
            textBox3.Text = test;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }



        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }



        private void button1_Click(object sender, EventArgs e)
        {
            backgroundWorker1.RunWorkerAsync();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            th2.Start();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            th3.Start();
        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            string test = "testing";
            textBox1.Text = test;
        }
    }
}
