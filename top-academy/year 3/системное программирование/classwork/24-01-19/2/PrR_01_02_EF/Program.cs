internal class Program
{
    private static void Main(string[] args)
    {
        ThreadStart tsListen = new ThreadStart(ListenClient);
        Thread thread = new Thread(tsListen);
        thread.IsBackground = false;
        thread.Start();
    }
    private static void ListenClient()
    {
        int Counter = 0;
        while (Counter<10)
        {
            ParameterizedThreadStart pts = new ParameterizedThreadStart(UserThread);
            Thread userThread = new Thread(pts);
            userThread.Start((object)Counter);
            Counter++;
        }
    }

    private static void UserThread(object obj)
    {
        string userName = ((Int32)obj).ToString();
        Console.WriteLine("Пользователь №"+userName+" подключился");
        while (true) {
            switch (GetUserCommand())
            {
                case 0:
                    Console.WriteLine("#{0} вошел в чат", userName);
                    break;
                case 1:
                    Console.WriteLine("#{0} написал письмо", userName);
                    break;
                case 2:
                    Console.WriteLine("#{0} сделал покупку", userName);
                    break;
                case 3:
                    Console.WriteLine("#{0} подписался на новости", userName);
                    break;
                case 4:
                    Console.WriteLine("#{0} отключился", userName);
                    return;
                    break;
                default:
                    break;
            }
        }
    }

    private static int GetUserCommand()
    {
        return (new Random()).Next(0,5);
    }
}