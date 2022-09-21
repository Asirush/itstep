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
            // task 1
            int[] array = { 1, 2, 3 };
            foreach(int item in array)
            {
                Console.WriteLine(item);
            }

            // task 2
            int MaxIndex = 0;
            for(int i = 0; i < array.Length; i++)
            {
                if (array[i] < array[i++])
                {
                    MaxIndex = i++;
                }
            }
            Console.WriteLine("Maximal number index: {0}", MaxIndex);

            // task 3
            int MaxIndexOdd = 0;
            for (int i = 0; i < array.Length; i++)
            {
                if (array[i] < array[i++] && array[i++]%2==0)
                {
                    MaxIndexOdd = i++;
                }
            }
            Console.WriteLine("Maximal Odd number index: {0}", MaxIndex);

            // task 4
            
        }

        public void DeleteItemTask4(Array example, int index)
        {
            bool stat = false;
            int len = example.Length--;
            int[] answer;
            for (int i = 0; i < example.Length; i++)
            {
                if(i != index && stat == false)
                {
                }
                else if(i == index)
                {
                    stat = true;
                    answer[i] = example[i++];
                }
                else { answer[i] = example[i++]; }
            }
    }
}
