using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
namespace Application
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*            WriteLine("qweqwqwqew"); // Вывод текста в консоль

                        int number = 10;

                        WriteLine($"Вывод числа на экран {number}");
                        Write($"Вывод числа на экран {number}"); // Без переноса на новую строку

                        Write($"Вывод числа на экран" + number);
                        ReadKey(); // Задержка чтобы консоль не закрывалась сразу*/

            /*            int num1 = 10;
                        num1 = Convert.ToInt32(ReadLine());

                        for (int i = 15; i <= 15; i++)
                        {
                            if (i >= 100)
                            {
                                break;
                            }
                            else
                            {
                                if (i % 3 == 0 && i % 5 == 0)
                                {
                                    Console.WriteLine("FizzBuzz");
                                }
                                else if (i % 3 == 0)
                                {
                                    Console.WriteLine("Fizz");
                                }
                                else if (i % 5 == 0)
                                {
                                    Console.WriteLine("Buzz");

                                }
                                else
                                {
                                    Console.WriteLine(i);
                                }
                            }
                        }*/


            /*            WriteLine("It's easy to win forgiveness for being wrong;\nbeing right is what gets you into real trouble");
                        WriteLine("Bjarne Stroustrup");

                        var numbers = new int[]
                        {
                            Convert.ToInt32(ReadLine()),
                            Convert.ToInt32(ReadLine()),
                            Convert.ToInt32(ReadLine()),
                            Convert.ToInt32(ReadLine()),
                            Convert.ToInt32(ReadLine())
                        };

                        Array.Sort(numbers);

                        int sum = 0;
                        int multy = 1;

                        for (int i = 0; i < numbers.Length; i++)
                        {
                            sum += numbers[i];
                            multy *= numbers[i];
                        }

                        WriteLine("Sum: " + numbers.Sum());
                        WriteLine("Max: " + numbers.Max());
                        WriteLine("Min: " + numbers.Min());
                        WriteLine("Multy: " + multy);
                        WriteLine("Concat: " + String.Join("", numbers));

                        int total = 0;
                        int percent = 0;

                        WriteLine("Enter number");
                        total = Convert.ToInt32(ReadLine());
                        WriteLine("Enter percent");
                        percent = Convert.ToInt32(ReadLine());

                        WriteLine((total / 100) * percent);*/


            var numbers2 = new int[]
            {
                Convert.ToInt32(ReadLine()),
                Convert.ToInt32(ReadLine()),
                Convert.ToInt32(ReadLine()),
                Convert.ToInt32(ReadLine()),
                Convert.ToInt32(ReadLine()),
                Convert.ToInt32(ReadLine())
            };

            for (int i = numbers2.Length-1; i > -1; i--)
            {
                Console.Write(numbers2[i]);
            }

        }
    }
}
