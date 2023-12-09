using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Media;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
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

            string msg1 = "hello, i'm eugene";
            string msg2 = "my favorite game is gta";
            string msg3 = "i played this game a lot of time";



            int averageSymbols = (msg1.Length + msg2.Length + msg3.Length) / 3;

            Console.Beep();
            MessageBox.Show(msg1);
            MessageBox.Show(msg2);
            MessageBox.Show(msg3, $"AVG Symbols: {averageSymbols.ToString()}");


            //SoundPlayer soundPlayer = new SoundPlayer (@"path"); // path to sound file
            //soundPlayer.Play(); // play music
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //new SoundPlayer().Stop(); // stop music
        }
    }
}
