using System.Runtime.InteropServices;
using System.Diagnostics;
internal class Program
{
    private static uint MB_YESNO = 0x00000004, MB_ICONQUESTION = 0x00000020,
        WM_CLOSE = 0x00010, WM_SETTEXT = 0x000C;
    private static void Main(string[] args)
    {
        Console.WriteLine("Практическая работа №1");
        Console.WriteLine("Задание №1");
        MessageBox(IntPtr.Zero, "Привет, мир!!!", "Окошко", MB_YESNO | MB_ICONQUESTION);
        Console.WriteLine("Окошко отображено");
        Console.WriteLine("");
        Console.WriteLine("Задание №2");
        MessageBox(IntPtr.Zero, "Привет, мир!!!", "Окошко", MB_YESNO | MB_ICONQUESTION);
        Console.WriteLine("Окошко новое отображено");
        Console.WriteLine("");
        Console.WriteLine("Задание №3");
        Process proc = new Process();
        proc.StartInfo = new ProcessStartInfo("notepad.exe");
        proc.Start();
        System.Threading.Thread.Sleep(500);
        IntPtr hWnd = FindWindowA(null, "Безымянный — Блокнот");
        for (int i = 0; i < 1000; i++)
        {
            SendMessage(hWnd, WM_SETTEXT, null, DateTime.Now.ToLongTimeString());
            System.Threading.Thread.Sleep(300);
        }

    }

    [DllImport("user32.dll")]
    public static extern IntPtr MessageBox(
        IntPtr hWnd, string lpText, string lpCaption, uint uType);
    [DllImport("user32.dll")]
    public static extern IntPtr FindWindowA(
        string lpClassName, string lpWindowName);
    [DllImport("user32.dll")]
    public static extern int SendMessage(
        IntPtr hWnd, uint Msg, string wParam, string lParam);

}