using static System.Console;

internal class Program
{
    private static void Main(string[] args)
    {
        ThreadStart ts = new ThreadStart(ThreadMethod);
        Thread th = new Thread(ts);
        th.Start();

        ParameterizedThreadStart pta = new ParameterizedThreadStart(ParamThreadMethod);
        Thread th1 = new Thread(ts);
        th1.Start("%1");
        Thread th2 = new Thread(pta);

        TimerCallback tcb = new TimerCallback(TimerTick);
        Timer timer = new Timer( tcb );
        WriteLine("H");
        timer.Change(2000, 500);
        Thread.Sleep(2000);

        for (int i = 0; i < 10; i++)
        {
            WriteLine("я маинкрафт");
        }
    }

    public static void ThreadMethod()
    {
        for (int i = 0; i < 10; i++) {
            WriteLine("i am a thread");
        }
    }

    public static void ParamThreadMethod(object obj)
    {
        for (int i = 0; i < 10; i++)
        {
            WriteLine("i am a thread");
        }
    }

    public static void TimerTick(object obj)
    {
        WriteLine("tic tac");
    }


}
