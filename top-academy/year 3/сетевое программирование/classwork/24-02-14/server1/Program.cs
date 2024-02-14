using System.Net;
using System.Net.Sockets;
using System.Text;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Hello, World");
        byte[] buffer = new byte[1024];

        IPEndPoint ep = new IPEndPoint(
            IPAddress.Parse("127.0.0.1"),
            50666);

        Socket ss = new Socket(
            AddressFamily.InterNetwork,
            SocketType.Stream,
            ProtocolType.IP);
        try
        {

            ss.Bind(ep);
            ss.Listen(128);
            Console.WriteLine("Server started. Waiting for connecting clinets");

           
            Socket cs = ss.Accept();
            Console.WriteLine("Client has connected");
            int bytesRead =cs.Receive(buffer);
            string strReq = System.Text.Encoding.UTF8.GetString(buffer, 0, bytesRead);
            Console.WriteLine(strReq);
            
            string strSend = "Привет клиент";
            cs.Send(Encoding.UTF8.GetBytes(strSend));

            cs.Shutdown(SocketShutdown.Both);
            cs.Close();

        }catch (Exception ex) {Console.WriteLine("Error: "+ex.Message);}
        finally { ss.Close(); }

        ss.Close();
    }
}