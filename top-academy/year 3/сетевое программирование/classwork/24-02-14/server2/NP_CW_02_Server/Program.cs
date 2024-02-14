using System.Net.Sockets;
using System.Net;
using System.Text;
using System;

internal class Program
{   class Server
    {
        private Socket serverSoket;
        private IPEndPoint endPoint;

        delegate void StartNetwork(Socket s);
        delegate void ClientWorker(Socket s);

        public Server(string ipAddress, int port)
        {
            endPoint= new IPEndPoint(
            IPAddress.Parse(ipAddress),
            port);
        }

        public void Start()
        {
            serverSoket = new Socket(
                AddressFamily.InterNetwork,
                SocketType.Stream,
                ProtocolType.IP);
            serverSoket.Bind(endPoint);
            serverSoket.Listen(10);
            Console.WriteLine("Сервер запущен, ожидаем подключения клиента!");
            StartNetwork start = new StartNetwork(Server_Begin);
            Task.Run(() => start(serverSoket));
        }

        public void Server_Begin(Socket s) 
        {
            while (true)
            {
                try { 
                    while(s!=null)
                    {
                        Socket cs = serverSoket.Accept();
                        Console.WriteLine("Клиент подключен:"+
                            cs.RemoteEndPoint.ToString());
                        ClientWorker cw = new ClientWorker(Server_Work);
                        Task.Run(() => cw(cs));
                    }
                } catch (Exception ex) 
                { Console.WriteLine("Ошибка:" + ex.Message); }
            }
        }
        public void Server_Work(Socket cs)
        {
            byte[] buffer = new byte[1024];
            int bytesRead = cs.Receive(buffer);
            string strReq = System.Text.Encoding.UTF8.
                GetString(buffer, 0, bytesRead);
            Console.WriteLine("Клиент прислал - " + strReq);


            string strSend = (strReq == "Дата") ?
                DateTime.Now.ToLongDateString() :
                DateTime.Now.ToLongTimeString();

            cs.Send(Encoding.UTF8.GetBytes(strSend));
        }

        internal void Close()
        {
            throw new NotImplementedException();
        }
    }

    private static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");
        Server server = new Server("127.0.0.1", 1024);
        server.Start();
        Console.ReadKey();
        server.Close();
    }
}