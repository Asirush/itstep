namespace lesson1
{
    class Program
    {
        static void Main()
        {

        }

        static void task1()
        {
            Console.Write("input number 1: ");
            string first_number = Console.ReadLine();
            Console.Write("input number 2: ");
            string second_number = Console.ReadLine();

            int all = 0, all2 = 0;

            foreach(var item in first_number)
            {
                int number = Convert.ToInt32(item.ToString());
                all += number;
            }

            foreach (var item in second_number)
            {
                int number = Convert.ToInt32(item.ToString());
                all += number;
            }

            Console.Write("Summ 1: ", all);
            Console.Write("Summ 2: ", all2);
        }
        static void task2()
        {
            Console.Write("input number 1: ");
            int number = Convert.ToInt32(Console.ReadLine());


        }
        
    }
    
}