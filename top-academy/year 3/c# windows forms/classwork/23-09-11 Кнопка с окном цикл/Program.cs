using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _9_11_23
{
    internal /*static*/ class Program
    {
        /*static*/ DialogResult ShowMessageBox()
        {
            String message = "";
            MessageBox.Show(message);
            message = "Window with two buttons Yes & No";
            String caption = "Two button";
            DialogResult result = MessageBox.Show(message, caption, MessageBoxButtons.OKCancel);
            
            String button = result.ToString();
            // window with 3 buttons and icon
            result = MessageBox.Show("You pressed on the button"+button+" Shall you again?", button,
                     MessageBoxButtons.AbortRetryIgnore, MessageBoxIcon.Asterisk);
            if (result == DialogResult.Retry) ShowMessageBox();
            return result;
        }

        /// <summary>
        /// Главная точка входа для приложения.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
            Program pr1 = new Program();
            pr1.ShowMessageBox();
        }
    }
}
