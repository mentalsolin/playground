using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace nl
{
    public class Student
    {
        public int Id { get; set; }

        public string Name { get; set; }

        public string LastName { get; set; }

        public Student()
        {
            Id = 1;
            Name = "";
            LastName = "";
        }

        public Student(int id, string name, string lastName)
        {
            Id = id;
            Name = name;
            LastName = lastName;
        }
    }

    public class Aspirant : Student
    {
        public bool exam { get; set; }

        public Aspirant(): base(1, "Name", "Last Name")
        {
            exam = true;
        }

        public Aspirant(int id, string name, string lastName, bool exam) : base(id, name, lastName)
        {
            this.exam = true;
        }

        public string ToString()
        {
            return Id + Name + LastName + exam;
        }

    }

}


namespace ln
{
    public class Human
    {
        public string Name { get; set; }

        public string LastName { get; set; }

        public DateTime Bdate { get; set; }

        public Human()
        {
            Name = "";
            LastName = "";
            DateTime bdate = new DateTime(1970, 1, 1);
            Bdate = bdate;
        }

        public Human(string name, string lastName, DateTime bdate)
        {
            Name = name;
            LastName = lastName;
            Bdate = bdate;
        }
    }

    public class Employee : Human
    {
        public string department { get; set; }

        public Employee(): base("name", "last name", DateTime.Now)
        {
            department = "2B";
        }

        public Employee(string name, string lastName, DateTime bdate, string department) : base(name, lastName, bdate)
        {
            this.department = "2B";
        }

        public Employee(string name, string lastName, DateTime bdate)
        {
            this.Name = name;
            this.LastName = lastName;
            this.Bdate = bdate;

        }

        public override string ToString()
        {
            return Name + " " + LastName + " " + Bdate.Month + "/" + Bdate.Day + "/" + Bdate.Year + department;
        }
    }

    public class Manager : Employee
    {
        public string post { get; set; }

        public Manager(string name, string lastName, DateTime bdate, string department): base(name, lastName, bdate)
        {
            this.department = "2B";
        }

        public override string ToString()
        {
            return Name + LastName + Bdate + department + post;
        }
    }


}



namespace nfruits
{
    public abstract class fruits
    {
        protected string color { get; set; }

        protected int semechki { get; set; }

        protected float weight { get; set; }

        protected int rot { get; set; }

        public void Grow(string pWhere)
        {
            if(pWhere.ToLower() == "palm" || pWhere.ToLower() == "tree")
            {
                Console.WriteLine("im grow up!");
            }
            else
            {

                Console.WriteLine("im rotting :(");
            }
        }

    }

    public class apple : fruits
    {
        public apple() { }
        public apple(string color, int semechki, float weight)
        {
            this.color = color;
            this.semechki = semechki;
            this.weight = weight;
            Console.WriteLine("An apple has created");

        }
    }
}


namespace _6._5._23
{
    internal class Program
    {
        static void Main(string[] args)
        {

/*            nfruits.apple apple = new nfruits.apple("green", 12, 76767378787778);
            apple.Grow("Tree");
*/

            ln.Employee employee = new ln.Employee("Artem", "Petrov", new DateTime(2004, 6, 25));

            Console.WriteLine(employee.ToString());

/*
            nl.Aspirant aspirant = new nl.Aspirant(1, "Artem", "Petrov", true);

            Console.WriteLine(aspirant.ToString());

            Console.ReadKey();*/
        }
    }
}
