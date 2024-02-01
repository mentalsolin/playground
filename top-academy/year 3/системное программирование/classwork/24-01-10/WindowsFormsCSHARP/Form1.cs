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

namespace WindowsFormsCSHARP
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            process1.StartInfo = new ProcessStartInfo("notepad.exe");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            process1.Start();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            process1.CloseMainWindow();
            process1.Close();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {

        }
    }
}
