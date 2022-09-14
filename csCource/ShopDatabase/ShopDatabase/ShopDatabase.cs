using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using lib.BLL;

namespace ShopDatabase
{
    internal class ShopDatabase
    {
        static void Main(string[] args)
        {
            try
            {
                int ch = 0;
                Console.WriteLine("------------------------");
                Console.WriteLine("Welcome to Shop");
                Console.WriteLine("1. Sign In");
                Console.WriteLine("1. Sign Up");
                Console.WriteLine("2. List Products");
                Console.WriteLine("3. List Discont Products");
                Console.Write("Select: ");
                ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        {

                            break;
                        }
                    case 2:
                        {

                            break;
                        }
                    case 3:
                        {

                            break;
                        }
                }
            }
            catch
            {

            }
        }
    }
}
