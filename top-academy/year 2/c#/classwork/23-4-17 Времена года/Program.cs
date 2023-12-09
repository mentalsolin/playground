using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace _4._17._23
{
    internal class Program
    {
        static void Main(string[] args)
        {

            DateTime TimeNow = new DateTime();
            TimeNow = Convert.ToDateTime(Console.ReadLine());

            int month = TimeNow.Month;
            string season;

            if (month >= 3 && month <= 5)
            {
                season = "Spring";
            }
            else if (month >= 6 && month <= 8)
            {
                season = "Summer";
            }
            else if (month >= 9 && month <= 11)
            {
                season = "Fall";
            }
            else
            {
                season = "Winter";
            }

            WriteLine($"Date: {TimeNow.Month}/{TimeNow.Day}/{TimeNow.Year}, {season}, {TimeNow.DayOfWeek}");




            // date yyyy/m/d
            DateTime myBirthday = new DateTime(2006, 3, 23, 1, 2, 3);

            Console.WriteLine($"{myBirthday.Month}/{myBirthday.Day}/{myBirthday.Year}, {myBirthday.DayOfWeek}, {myBirthday.Hour}, {myBirthday.Minute}, {myBirthday.Second}");

            DateTime TimeNow2 = new DateTime();
            TimeNow2 = Convert.ToDateTime(Console.ReadLine());
            Write($"Full date: {TimeNow2}");
            



            Console.ForegroundColor = ConsoleColor.Green;


            /*Console.CursorSize = 100;
            Console.CursorVisible = true;
            Console.CursorTop = 20;
            Console.CursorLeft = 20;
*/

            Console.WriteLine((10D).GetType());
            Console.WriteLine((10f).GetType());
            Console.WriteLine((999m).GetType());
            Console.WriteLine((15L).GetType());
            Console.WriteLine((666UL).GetType());
            Console.WriteLine((0xFF).GetType()); // поддерживается 1бинарная система счисления
            //Console.WriteLine(String.);






            int? nullint = null;
            nullint = nullint ?? 50;
            Console.WriteLine(nullint);

            int? nullint1 = null;
            if(nullint1 == null)
            {
                nullint1 = 50;
            }
            Console.WriteLine(nullint1);

            Nullable<int> nullint2 = null;
            nullint2 = 10;
            Console.WriteLine(nullint2);






            char ch = 'a';
            Console.WriteLine(ch);
            Console.WriteLine(char.ToUpper(ch));
            Console.WriteLine(char.IsLetter('d'));
            Console.WriteLine(char.IsLetterOrDigit('d'));
            Console.WriteLine(char.IsLetterOrDigit(','));












            Console.Write("Enter number1: ");
            int num1 = Convert.ToInt32(Console.ReadLine()); // конвертируем стринг в инт
            
            Console.Write("Enter number2: ");
            float num2 = Convert.ToSingle(Console.ReadLine());

            Console.Write("Enter number3:");
            decimal num3 = Convert.ToDecimal(Console.ReadLine());

            Console.Write("Enter number4:");
            string str = Console.ReadLine();

            Console.Write("Enter 0 or 1:");
            object obj = Convert.ToBoolean(Convert.ToInt32(Console.ReadLine()));

            Console.Write("Enter 0 or 1:");
            bool num4 = Convert.ToBoolean(Console.ReadLine());

            Console.Write($"{num1} {num2} {num3} {str} {obj} {num4}");

        }
    }
}
