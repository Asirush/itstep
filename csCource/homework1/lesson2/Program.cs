namespace lesson1
{
    class Program
    {

        static void Main()
        {
            task1();
        }

        static void task1()
        {
            Console.Write("input you name, surname: ");
            string name = Console.ReadLine();
            Console.Write("Hello, " + name);
        }

        static void task2()
        {
            int counter = 0, i = 0, summ = 0;
            string[] numberList = new string[10];
            Console.Write("input numbers: (press c to cancel)");
            while(counter != 1)
            {
                string number = Console.ReadLine();
                if (number[0] == 'c') { break; }
                else
                {
                    numberList[i++] = number;
                }
            }
            foreach(var item in numberList)
            {
                int result = Int32.Parse(item);
                summ = summ + result;
            }
            Console.Write("result: " + summ);
        }
    }
    
}