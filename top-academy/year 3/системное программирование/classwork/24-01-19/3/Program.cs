
internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("Primary thread");
        Random r = new Random();

        for (int i = 0; i < 10; i++)
        {
            ThreadPool.UnsafeQueueUserWorkItem(WorkMethod, r.Next(10));
        }
        Console.WriteLine("Primary thrade - is running");
        Thread.Sleep(1000);
        Console.WriteLine("Press any key");
        Console.ReadKey();
    }

    private static void WorkMethod(object state)
    {
        Console.WriteLine("Thread: {0} wit parametr {1}",
            Thread.CurrentThread.ManagedThreadId, state);
        Thread.Sleep(1000);
    }
}
