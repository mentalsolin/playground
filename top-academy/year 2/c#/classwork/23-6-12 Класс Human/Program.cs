using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;




namespace p1
{
    public class Human
    {
        private int _salary { get; set; }
        private string _name { get; set; }

        public Human()
        {
            _salary = 0;
            _name = "";
        }

        public Human(int salary, string name)
        {
            this._salary = salary;
            this._name = name;
        }

        public override string ToString()
        {
            return $"Name: {_name}, Salary: {_salary}";
        }




        public static int operator+(Human human, int newSalary)
        {
            return human._salary += newSalary;
        }

        public static int operator -(Human human, int newSalary)
        {
            return human._salary -= newSalary;
        }


        public static string operator==(Human human, Human human1)
        {
            return human._salary == human1._salary ? $"{human._salary} == {human1._salary}" : $"{human._salary} != {human1._salary}";
        }

        public static string operator !=(Human human, Human human1)
        {
            return human._salary == human1._salary ? $"{human._salary} == {human1._salary}" : $"{human._salary} != {human1._salary}";
        }

    }
}




namespace p2
{
    public class Matrix
    {
        private int[][] _arr { get; set; }
        public int _R1 { get;  }
        public int _R2 { get;  }


        public Matrix(int R1, int R2)
        {
            this._R1 = R1;
            this._R2 = R2;

            _arr = new int[R1][];
            for (int i = 0; i < R1; i++)
            {
                _arr[i] = new int[R2];
            }


            Random rand = new Random();
            for (int i = 0; i < _R1; i++)
            {
                for (int j = 0; j < _R2; j++)
                {
                    _arr[i][j] = rand.Next(0, 9);
                }
            }
        }

        public Matrix(int[][] arr, int r1, int r2)
        {
            _arr = arr;
            _R1 = r1;
            _R2 = r2;
        }
        public Matrix(Matrix m)
        {
            this._R2 = m._R2;
            this._R1 = m._R1;
            this._arr = m._arr;
        }

        public static Matrix operator +(Matrix m1, Matrix m2)
        {
            int[][] _matrix;

            _matrix = new int[m1._R1][];
            for (int i = 0; i< m1._R1; i++)
            {
                _matrix[i] = new int[m1._R2];
            }

            for (int i = 0; i < m1._R1; i++)
            {
                for (int j = 0; j < m1._R2; j++)
                {
                    _matrix[i][j] = m1._arr[i][j] + m2._arr[i][j];
                }
            }
            return new Matrix(_matrix, m1._R1, m1._R2);
        }

        public static Matrix operator -(Matrix m1, Matrix m2)
        {
            int[][] _matrix;

            _matrix = new int[m1._R1][];
            for (int i = 0; i < m1._R1; i++)
            {
                _matrix[i] = new int[m1._R2];
            }

            for (int i = 0; i < m1._R1; i++)
            {
                for (int j = 0; j < m1._R2; j++)
                {
                    _matrix[i][j] = m1._arr[i][j] - m2._arr[i][j];
                }
            }
            return new Matrix(_matrix, m1._R1, m1._R2);
        }



        public void Display()
        {
            for (int i = 0; i < _R1; i++)
            {
                for (int j = 0; j < _R2; j++)
                {
                    Console.Write(_arr[i][j] + " ");
                }
                Console.WriteLine();
            }
        }
    }

}

namespace p3
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

    public class Builder : Human
    {
        public string department { get; set; }

        public Builder() : base("name", "last name", DateTime.Now)
        {
            department = "2B";
        }

        public Builder(string name, string lastName, DateTime bdate, string department) : base(name, lastName, bdate)
        {
            this.department = "2B";
        }

        public Builder(string name, string lastName, DateTime bdate)
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


    public class Sailor : Builder
    {
        public string post { get; set; }

        public Sailor(string name, string lastName, DateTime bdate, string department) : base(name, lastName, bdate)
        {
            this.department = "2B";
        }

        public override string ToString()
        {
            return Name + " " + LastName + " " + Bdate.Month + "/" + Bdate.Day + "/" + Bdate.Year + " " + department;
        }
    }



}


namespace _6._12._23
{
    internal class Program
    {
        static void Main(string[] args)
        {


            p3.Builder employee = new p3.Builder("Artem", "Petrov", new DateTime(1972, 6, 25));
            p3.Sailor employee1 = new p3.Sailor("Andrey", "Petrov", new DateTime(1968, 3, 14), "H3");

            Console.WriteLine(employee.ToString());
            Console.WriteLine(employee1.ToString());




            /*
                        p2.Matrix matrix = new p2.Matrix(5, 5);
                        p2.Matrix matrix1 = new p2.Matrix(5, 5);

                        matrix.Display();
                        matrix1.Display();

                        p2.Matrix matrix3 = new p2.Matrix(matrix + matrix1);
                        matrix3.Display();

                        p2.Matrix matrix4 = new p2.Matrix(matrix - matrix3);
                        matrix4.Display();*/











            /*
                p1.Human human = new p1.Human(45724, "John Doe");
                p1.Human human1 = new p1.Human(45724, "John Doe");
                Console.WriteLine(human.Equals(human));

                Console.WriteLine(human.ToString());
                Console.WriteLine(human1.ToString());

                Console.WriteLine(human == human1);
                Console.WriteLine(human != human1);

                Console.WriteLine(human + 200);
                Console.WriteLine(human1 - 200);

                Console.WriteLine(human.ToString());
                Console.WriteLine(human1.ToString());
                Console.WriteLine(human.Equals(human1));
            */

        }
    }
}
