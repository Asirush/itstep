using lesson10;
using System;

public class Program
{
    static void Main(string[] args)
    {
        Random rnd = new Random();
        FillIn fillIn = new FillIn();

        for(int i = 0; i < 5; i++)
        {
            try
            {
                fillIn.AddTrans(new Car());
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        for (int i = 0; i < 5; i++)
        {
            try
            {
                fillIn.AddTrans(new Bike(rnd.Next(0, 2500), rnd.Next(0, 2500)));
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        fillIn.PrintList();
    }
}