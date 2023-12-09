using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using System.Data;
using Human;

namespace Human
{
    internal class Student
    {
        protected string name { get; set; }
        protected int age { get; set; }
        public Student() { }
        public Student(string name, int age)
        {
            this.name = name;
            this.age = age;
        }

        public virtual void Print()
        {
            Console.WriteLine(name);
            Console.WriteLine(age);
        }

        public Student(Student student)
        {
            this.name = student.name;
            this.age = student.age;
        }
    }
        internal class Backend : Student
        {
        public long salary { get; set; }
        public Backend() { }

        public Backend(Student student, long salary) : base(student)
        {
            this.salary = salary;
        }

        public override void Print()
        {
            Console.WriteLine("Name " + name);
            Console.WriteLine("Age " + age);
            Console.WriteLine("Salary" + salary);
        }
    }
}

namespace Stim
{
    internal class User
    {
        protected string name { get; set; }
        protected string password { get; set; }

        public User(string name, string password) {
            this.name=name;
            this.password=password;
        }

        public User() { }
        public User(User player) { 
            this.name = player.name;
            this.password = player.password;
        }

        public virtual void PrintUser()
        {
            Console.WriteLine("Username: " + name);
        }

    }
 
    internal class CaunterStrike : User
    {
        public string rank { get; set; }

        public CaunterStrike() { }

        public CaunterStrike(User player, string rank) : base(player)
        {
            this.rank = rank;
        }
        public override void PrintUser()
        {
            Console.WriteLine("Name " + name);
            Console.WriteLine("Age " + rank);
        }
    }


}

namespace _9_4_23
{
    using Human;
    using Stim;
    using System.Runtime.CompilerServices;
    using System.Security.Cryptography.X509Certificates;

    internal class Program
    {
        static void Main(string[] args)
        {


            User user1 = new User("John", "5325");
            user1.PrintUser();



/*            Student student = new Student("Name A", 150);
            student.Print();
            Student backend = new Backend(student, 100);
            backend.Print();

            int a = 8;
            string str = "hello";

            int[] arr = {1,2, 3};
            int[,] arr2 = { { 1, 2 }, { 1, 2 } };

            Console.WriteLine(a);
            Console.Write(str);

            List<int> list = new List<int>(){ 1,2,3,4,5 };
            ArrayList arrayList = new ArrayList() { 1,2,3,4,5,"mdkjr" };

            for(int i = 0; i < arrayList.Count; i++)
            {
                Console.WriteLine(arrayList[i]);
            }

            Console.WriteLine("\nEnter number");
            int num = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Number is: {num}");*/

        }
    }
}
