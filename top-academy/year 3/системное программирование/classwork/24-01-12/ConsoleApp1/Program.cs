using System.Diagnostics;
using System.Reflection;
/*using ClassLibrary1;*/

internal class Program
{
    private static void Main(string[] args)
    {
        /*Process proc = new Process();
        proc.StartInfo.FileName = "notepad.exe";
        proc.Start();
        Console.WriteLine("Process " + proc.ProcessName + " starts");
        proc.WaitForExit();
        Console.WriteLine("Process has stoped with exit code "  + proc.ExitCode);

        Console.WriteLine("Current process ID " + Process.GetCurrentProcess().ProcessName);
        Console.WriteLine();
        Console.WriteLine("Process list");
        Console.WriteLine("{0,-10}{1,-10}", "PID", "Name");
        foreach (Process item in Process.GetProcesses())
        {
            Console.WriteLine("{0,-10}{1,-10}", item.Id, item.ProcessName);
        }*/

        Assembly asm = Assembly.Load(AssemblyName.GetAssemblyName("ClassLibrary1.dll"));
        Module mod = asm.GetModule("ClassLibrary1.dll");
        Console.WriteLine("Define data types:");
        foreach (Type t in mod.GetTypes())
        {
            Console.WriteLine(t.FullName);
        }
        Type Person = mod.GetType("ClassLibrary1.Person") as Type;
        object person = Activator.CreateInstance(Person, new object[] {"Ivan", "Ivanov", 30});
        Person.GetMethod("Print").Invoke(person, null);
        Console.ReadLine();
    }
}