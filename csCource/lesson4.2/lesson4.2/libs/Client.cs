using System;
namespace lesson4._2.libs
{
    public class Client
    {
        public int UserID { get; set; }
        public string IIN { get; set; }
        public DateTime BirthsdayDate { get; set; }
        public string Name { get; set; }
        public string Surname { get; set; }
        public Address UserAddres { get; set; }
        public string PhoneNumber { get; set; }
        public Account[] Accounts { get; set; }
        public string passd { get; set; }

        public string FullName
        {
            get
            {
                return (Name + " " + Surname);
            }
        }
        public int Age
        {
            get
            {
                return (DateTime.Now.Year - BirthsdayDate.Year);
            }
        }
        public string ShortName
        {
            get
            {
                return string.Format("{0} {1}.", Name, Surname[0]);
            }
        }

        public Client()
        {

        }
    }
}

