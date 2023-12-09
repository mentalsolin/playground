using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace WindowsFormsApp24
{
    public partial class Form1 : Form
    {
        MenuItem menu1 = new MenuItem("AAAAA");
        public Form1()
        {
            InitializeComponent();
            openFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
            Text = "Explorer";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                listBox1.Items.Add(openFileDialog1.FileName);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit(); 
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            listBox1.SelectedItem = null;
        }

        private void listBox1_DoubleClick(object sender, EventArgs e)
        {
            string Filepath = listBox1.SelectedItem.ToString();
            if (listBox1.SelectedItem != null)
            {
                Process.Start(Filepath);
            }
            
        }
    }
}
