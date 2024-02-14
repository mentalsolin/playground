using System.Net;
using System.Net.Sockets;
using System.Text;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");

        IPAddress ip = IPAddress.Parse("127.0.0.1");
        IPEndPoint ep = new IPEndPoint(ip, 50666);

        Socket cs = new Socket(
            AddressFamily.InterNetwork,
            SocketType.Stream,
            ProtocolType.IP);

        string strSend = "Привет сервер";
        byte[] buffer = new byte[4096];

        try
        {
            cs.Connect(ep);

            cs.Send(System.Text.Encoding.UTF8.GetBytes(strSend));

            int BytesRead = cs.Receive(buffer);
            string srtReq = Encoding.UTF8.GetString(buffer);
            Console.WriteLine(srtReq);

            cs.Shutdown(SocketShutdown.Both);
        }
        catch (Exception ex) { Console.WriteLine("Error: " + ex.Message);}
        finally { cs.Close();}
    }
}