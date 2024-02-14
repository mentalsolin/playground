using System.Net;
using System.Net.Sockets;
using System.Text;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");

        IPAddress ip = IPAddress.Parse("127.0.0.1");
        IPEndPoint ep = new IPEndPoint(ip, 1024);

        Socket cs = new Socket(
            AddressFamily.InterNetwork,
            SocketType.Stream,
            ProtocolType.IP);

        Console.WriteLine("Выберите запрос:");
        Console.WriteLine("1. Узнать время");
        Console.WriteLine("2. Узнать дату");
        Console.WriteLine("Сделайте выбор:");
        ConsoleKeyInfo key = Console.ReadKey(true);
        string strSend = (key.Key== ConsoleKey.D1) ? "Дата" : "Время";

        byte[] buffer = new byte[1024];

        try
        {
            cs.Connect(ep);

            cs.Send(System.Text.Encoding.UTF8.GetBytes(strSend));

            int bytesRead = cs.Receive(buffer);
            string strReq = Encoding.UTF8.GetString(buffer);
            Console.WriteLine("Ответ сервера: " + strSend + " = " + strReq);
            
            cs.Shutdown(SocketShutdown.Both);
        }
        catch (Exception ex) { Console.WriteLine("Ошибка:" + ex.Message); }
        finally  {cs.Close();}
    }
}