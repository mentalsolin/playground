using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using static System.Console;

namespace _4._19._23
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int[] mas2 = { 7, 2, 4, 4, 4, 4, 8, 24, 56, 5, 2, 7, 8, 5, 12 };

            int even = 0;
            int odd = 0;

            for (int i = 0; i < mas2.Length; i++)
            {
                Write($"{mas2[i]} ");
            }

            for (int i = 0; i < mas2.Length; i++)
            {
                if (mas2[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            WriteLine($"\neven numbers: {even}, odd numbers: {odd}");

            //int min = Convert.ToInt32(ReadLine());

            HashSet<int> uniqueNumbers = new HashSet<int>();

            Write("\n");
            Array.Sort(mas2);

            for (int i = 0; i < mas2.Length; i++)
            {
                Write($"{mas2[i]} ");
            }

            Write("\n");

            for (int i = 0; i < mas2.Length; i++)
            {
                if (true)
                {
                    uniqueNumbers.Add(mas2[i]);
                }
            }

            foreach (int i in uniqueNumbers)
            {
                Write(i + " ");
            }

            //int[] mas = { 1, 2, 3, 4, 5 };
            //WriteLine(mas.Max());
            //for (int i = 0; i < mas.Length; i++)
            //{
            //    Write($"{mas[i]} ");
            //}




            //int result = (1 < 10) ? 100 : 0;
            //WriteLine(result);
            //result = (result == 100) ? 300 : 0;
            //WriteLine(result);



            //Random random = new Random();
            //int numberRnd = random.Next(1, 100);
            //WriteLine(numberRnd);

            //double numberRnd1 = random.NextDouble();
            //WriteLine(numberRnd1);




            //if (true)
            //{
            //    WriteLine("if");
            //}





            //int num5 = 10;
            //WriteLine(++num5); // префиксный инкремент 
            //int num6 = 20;
            //WriteLine(num6++); // постфиксный инкремент






            //WriteLine("Enter number: ");
            //string str = ReadLine();
            //WriteLine(str);
            //WriteLine(str+1);
            //int number = Int32.Parse(str);
            //WriteLine(str);
            //WriteLine(str + 1);

            //WriteLine("Enter decimal number: ");
            //decimal dec = Decimal.Parse(ReadLine());
            //WriteLine("Enter decimal number: ");
            //decimal dec2 = Convert.ToDecimal(ReadLine());




            //int a = 20;
            //float num = 10.5f;

            //float tres = a + num;

            //double num2 = 11.6;
            //WriteLine(num2);

            //int num3 = (int)num2;
            //WriteLine(num3);

            //byte num4 = 14; // 0 - 255
            //WriteLine((char)num4);
            //WriteLine((sbyte)num4); // -127 128
            //WriteLine((int)num4);



            ReadKey();
        }
    }
}
