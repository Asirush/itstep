using System;
namespace lesson4._2.libs
{
    public class Bank
    {
        public Client[] ClientList { get; set; }


        public Bank()
        {
            ClientList = new Client[2];
            ClientList[0] = new Client() {
                Name = "Assir",
                Surname = "Abdukhalikov",
                UserID = 001,
                PhoneNumber = "+7(707)268-47-36",
            };

        }
    }
}

