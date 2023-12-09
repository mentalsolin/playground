using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace overflow
{
    public class Point
    {
        public int _x { get; set; }

        public int _y { get; set; }

        public Point()
        {
            _x = 0;
            _y = 0;
        }

        public Point(int x, int y)
        {
            this._x = x;
            this._y = y;
        }

        public static string operator+(Point point, Point point1)
        {
            Point result = new Point(point._x + point1._x, point._y + point1._y);
            return $"x: {result._x}, y: {result._y}";
        }
        public static string operator -(Point point, Point point1)
        {
            Point result = new Point(point._x - point1._x, point._y - point1._y);
            return $"x: {result._x}, y: {result._y}";
        }

        public static Point operator--(Point point)
        {
            Point result = new Point(-point._x-1, -point._y-1);
            return result;
        }
        public static Point operator++(Point point)
        {
            Point result = new Point(+point._x + 1, +point._y + 1);
            return result;
        }

        public override string ToString()
        {
            return $"x: {this._x}, y: {this._y}";
        }

        public static bool operator true (Point point)
        {
            return point._x == point._y ? true : false;
        }

        public static bool operator false(Point point)
        {
            return point._x != point._y ? false : true;
        }
    }
}

namespace _6._7._23
{
    internal class Program
    {
        static void Main(string[] args)
        {


            overflow.Point point = new overflow.Point(6, 9);
            overflow.Point point1 = new overflow.Point(6, 9);

            Console.WriteLine(point + point1);
            Console.WriteLine(point - point1);
            Console.WriteLine(point != point1);
            Console.WriteLine(point == point1);
            Console.WriteLine(Equals(point, point1));
            Console.WriteLine(Equals(point, point));

            Console.WriteLine(point.ToString());
            --point._x;
            Console.WriteLine(point.ToString());



            if (point)
            {
                Console.WriteLine("point True");
            }
            else
            {
                Console.WriteLine("point False");

            }
        }
    }
}
