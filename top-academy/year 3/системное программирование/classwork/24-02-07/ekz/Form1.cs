using System;
using System.IO;
using System.Text;

namespace ekz
{
    public partial class Form1 : Form
    {
        Thread th;
        Dictionary<string, int> dic = new Dictionary<string, int>();

        public Form1()
        {
            InitializeComponent();

            label4.Font = new Font(label1.Font, FontStyle.Underline);
        }

        private void button1_Click(object sender, EventArgs e)
        {

            string[] words = textBox1.Text.Split(' ');
            foreach (string w in words)
                dic.Add(w, 0);

            th = new Thread(ThMeth);
            th.Start();
        }

        private void ThMeth()
        {
            this.textBox1.Invoke(() =>
            {
                try
                {
                    string[] dirs = Directory.GetFiles(@".\files\","*");

                    textBox2.Text = dirs.Length.ToString();
                    label3.Text = "";
                    foreach (string filepath in dirs)
                    {
                        FindAndReplaceInFile(filepath);
                    }
                }
                catch (Exception e)
                {
                    textBox2.Text = "ERROR";
                }
            });
        }

        private void FindAndReplaceInFile(string filepath)
        {
            string[] fileLines= File.ReadAllLines(filepath);
            foreach (string g in fileLines)
            {
                string[] word1 = g.Split(' ');
                if (g == "end")
                {
                    label1.Text = "Found";
                }
                word1.ToString();
            }
                
                
        }

        private void label4_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog();
            dialog.Filter = "Text files | *.txt";
            dialog.Multiselect = false;
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                String path = dialog.FileName;
                using (StreamReader reader = new StreamReader(new FileStream(path, FileMode.Open), new UTF8Encoding()))
                {
                    textBox1.Text = reader.ReadToEnd().ToString();
                }
            }
        }
    }
}