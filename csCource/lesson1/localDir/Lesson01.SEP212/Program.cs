using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lesson01.SEP212
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string fName = "Asir";

            Console.Write("введите ФИО: ");
            string userName = Console.ReadLine();

            Console.WriteLine("приветствую тебя" + userName + "!");

            Console.Write("введите возраст: ");
            string userAge = Console.ReadLine();

            int currentAge = 2022;
            userAge = Convert.ToInt32(userAge);

            int avalAge = currentAge - userAge;

            if (avalAge >= 18)
            {
                Console.WriteLine("приветствую тебя" + userName + "!");
            }
            else
            {
                Console.WriteLine("слишком молод");
            }
        }
    }
}
