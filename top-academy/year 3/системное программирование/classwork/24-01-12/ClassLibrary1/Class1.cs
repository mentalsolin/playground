using System.Xml.Linq;

namespace ClassLibrary1
{
    public enum PersonMaritalStatus
    {
        Merried,
        Single
    }
    [Serializable]
    public class Person
    {
        string Name;
        string LastName;
        int Age;
        PersonMaritalStatus MaritalStatus;

        public Person(string Name, string LastName, int Age)
        {
            this.Name = Name;
            this.LastName = LastName;
            this.Age = Age;
            this.MaritalStatus = PersonMaritalStatus.Single;
        }
        public void Print()
        {
            Console.WriteLine("Person:\nName: " + Name + "\nLastName: " + LastName + "\nAge" + Age);
        }

        public class Employee : Person
        {
            string Position;
            decimal Salary;
            public Employee(string Name, string LastName, int Age, string Position, decimal salary) :
                base(Name, LastName, Age)
            {
                this.Position = Position;
                this.Salary = salary;
            }
        }
    }
}