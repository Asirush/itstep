using System;
using lesson4._2.libs;

namespace application
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // default color for text
            Console.ForegroundColor = ConsoleColor.White;

            Bank bankingClient = new Bank();
            string message = "";

            Client user = new Client();
            user.Accounts = null;
            user.UserAddres = null;
            user.BirthsdayDate = new DateTime(2002, 09, 14);
            user.IIN = "020914501560";
            user.Name = "Assir";
            user.Surname = "Abduhalikov";
            user.Passwd = "12345";
            user.PhoneNumber = "+7(707)268-47-36";
            user.Gender = 'M';

            if(bankingClient.Registration(user, out message))
            {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.WriteLine(message);
                Console.ForegroundColor = ConsoleColor.White;
            }
            else
            {
                // setting red color for exception
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine(message);
                // returning to white foreground 
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
    }
}