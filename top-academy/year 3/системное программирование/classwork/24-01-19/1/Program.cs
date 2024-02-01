using System.Security.Cryptography;
internal class Program
{
    private static object _SectObj = new object();
    private static bool _IsAbordThread = false;
    private static bool _IsSuspendThread = false;
    private static void Main(string[] args)
    {
        ParameterizedThreadStart paramTS = null;
        ConsoleKeyInfo key;
        while (true)
        {
            Console.Clear();
            Console.WriteLine("");
            Console.WriteLine("Choose option");
            Console.WriteLine("1. Encrypting");
            Console.WriteLine("2. Decrypting");
            Console.WriteLine("3. Exit");
            key = Console.ReadKey(true);

            switch (key.Key)
            {
                case ConsoleKey.D1:
                    paramTS = new ParameterizedThreadStart(Encryption);
                    Console.WriteLine("Choose file for encryption: ");
                    break;
                case ConsoleKey.D2:
                    paramTS = new ParameterizedThreadStart(Encryption);
                    Console.WriteLine("Choose file for dencryption: ");
                    break;
                case ConsoleKey.D3:
                    return;
                    break;
                default:
                    continue;
                    break;
            }

            string fileName = Console.ReadLine();
            Thread thread = new Thread(paramTS);
            thread.Start((object)fileName);
            Console.WriteLine("Choose operation with thread");
            do
            {
                Console.Write("(S)top thread ");
                Console.Write("(P)ause thread");
                Console.WriteLine("");
                key = Console.ReadKey(true);

                switch (key.Key)
                {
                    case ConsoleKey.S:
                        _IsAbordThread = true;
                        Console.WriteLine("Thread available for stop");
                        break;
                    case ConsoleKey.P:
                        if (thread.ThreadState == ThreadState.Running)
                        {
                            _IsSuspendThread = true;
                            Console.WriteLine("Thread is waiting");
                            break;
                        }
                        if (thread.ThreadState == ThreadState.WaitSleepJoin)
                        {
                            Monitor.Enter(_SectObj);
                            try {
                                _IsSuspendThread = false;
                                Console.WriteLine("Thread is alive");
                                Monitor.Pulse(_SectObj);
                            }
                            finally { Monitor.Exit(_SectObj); }
                        }
                        break;
                    default:
                        continue;
                        break;
                }
            }
            while (thread.ThreadState == ThreadState.Running || thread.ThreadState == ThreadState.WaitSleepJoin);
            Console.ReadKey();
            Console.Clear();
        }
    }

    private static void Encryption(object obj)
    {
        Console.WriteLine("Created encryption thread");
        while (true)
        {
            Monitor.Enter(_SectObj);
            try
            {
                if (_IsAbordThread)
                {
                    _IsAbordThread = false;
                    Console.WriteLine("Thread stoped");
                    return;

                }
                if (_IsSuspendThread)
                {
                    Monitor.Wait(_SectObj);
                }
            }
            finally
            {
                Monitor.Exit(_SectObj);
            }
        }
    }
    private static void Dencryption(object obj)
    {

    }
}