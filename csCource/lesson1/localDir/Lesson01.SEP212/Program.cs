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
            #region task1
            string fName = "Asir";

            Console.Write("введите ФИО: ");
            string userName = Console.ReadLine();

            Console.WriteLine("приветствую тебя" + userName + "!");

            Console.Write("введите возраст: ");
            string userAge = Console.ReadLine();

            int currentAge = 2022;
            int userAge_ = Convert.ToInt32(userAge);

            int avalAge = currentAge - userAge_;

            if (avalAge >= 18)
            {
                Console.WriteLine("приветствую тебя" + userName + "!");
            }
            else
            {
                Console.WriteLine("слишком молод");
            }
            #endregion

            int el = 5;
            long el2 = el;

            long el3 = 0;
          //int el4 = el3;
            int el4 = (int)el3;

            //helpig classes
            // variant 1
            string currentYear = "2022";
            int el5 = Convert.ToInt32(currentYear);                                                                            // class Convert
            // variant 2
            int el6 = Int32.Parse(currentYear.ToString());
            /* if we set object type for currentYear int32.parse won't work properly, because parse waiting only string */

            //try to parse
            int el7 = 0;
            bool result = Int32.TryParse(currentYear.ToString(), out el7); //out is a default meaning if input wrong
            if (result) { Console.WriteLine(); }
            else { Console.WriteLine(); }

            // variable methods with editing                                                                                     class DateTime
            DateTime date = DateTime.Now;
            Console.WriteLine(date);

            date = date.AddYears(5);
            Console.WriteLine(date);

            List<int> arr = new List<int>();

            exxample(arr, el5); // in case we work not with copy of array, but with actual array причина в том, что ссылочный тип данных хранит ссылку, тип значения el5 будет редактироваться как копия

        }
        public static void exxample(List<int> arr, int age) { } // чтобы передать не копью а ссылку на переменную стоит добавить "ref int age"
    }
}
