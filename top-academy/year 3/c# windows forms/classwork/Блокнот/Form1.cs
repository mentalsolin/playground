using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        string buffer;
        public Form1()
        {
            InitializeComponent();


            // создаем элементы меню
            ToolStripMenuItem copyMenuItem = new ToolStripMenuItem("Copy");
            ToolStripMenuItem pasteMenuItem = new ToolStripMenuItem("Paste");
            // добавляем элементы в меню
            contextMenuStrip1.Items.AddRange(new[] { copyMenuItem, pasteMenuItem });
            // ассоциируем контекстное меню с текстовым полем
            textBox1.ContextMenuStrip = contextMenuStrip1;
            // устанавливаем обработчики событий для меню
            copyMenuItem.Click += copyMenuItem_Click;
            pasteMenuItem.Click += pasteMenuItem_Click;

            this.Text = "New file";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.Cancel)
                return;
            string filename = saveFileDialog1.FileName;
            System.IO.File.WriteAllText(filename, textBox1.Text);
            this.Text = filename;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (openFileDialog1.ShowDialog() == DialogResult.Cancel)
                return;
            string filename = openFileDialog1.FileName;
            string fileText = System.IO.File.ReadAllText(filename);
            textBox1.Text = fileText;

            this.Text = filename;
        }

        private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        {

        }
        void pasteMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Paste(buffer);
        }
        // копирование текста
        void copyMenuItem_Click(object sender, EventArgs e)
        {
            // если выделен текст в текстовом поле, то копируем его в буфер
            buffer = textBox1.SelectedText;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {

        }
    }
}
