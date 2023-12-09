using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace WindowsFormsApp4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_MouseDown(object sender, MouseEventArgs e)
        {
            //на границе ClientSize.Width-10 получаем размер окна
            if (e.X < 10 || e.X == ClientSize.Width - 10 ||
                e.Y < 10 || e.Y == ClientSize.Height - 10)
            {
                MessageBox.Show("На границе прямуогольника");
            }
            else
            {
                //левая клавиша 
                if (MouseButtons.Left == e.Button)
                { //если нажата левая клавиша
                    MessageBox.Show("Внутри панели " + e.Location);
                    //e.Location - метоположение мыши(координаты x y)
                }

                //ModifierKeys==Keys.Control когда нажимаем левую и клавишу Ctrl 
                if (MouseButtons.Left == e.Button && ModifierKeys == Keys.Control)
                {
                    Close();//Закрытие формы 
                }
                
            }
            //Правая клавиша мыши 
            if (e.Button == MouseButtons.Right)
            {
                this.Text = "Ширина окна = " + Width.ToString() + " Высота окна = " + Height.ToString();

            }
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            //левая клавиша работает на форме( а не на панели)
            if (MouseButtons.Left == e.Button)
            { //если нажата левая клавиша
                MessageBox.Show("Вне панели " + e.Location);
                //e.Location - метоположение мыши(координаты x y)
            }
            //Правая клавиша мыши 
            if(e.Button== MouseButtons.Right)
            {
                //this.Text="Ширина окна = "+ Width.ToString()+" Высота окна = "+Height.ToString();
                Thread.Sleep(2000);//using System.Threading; задержка 
            }
           
        }
        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            //string text = $"X:{e.X} Y:{e.Y} ";
            //this.Text = e.Location.ToString();
           
        }
        private void panel1_MouseMove(object sender, MouseEventArgs e)
        {
            this.Text = e.Location.ToString();
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        
    }
}
