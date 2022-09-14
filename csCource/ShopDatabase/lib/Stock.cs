using System;
namespace lib.BLL
{
    public class Stock
    {
        public string Country { set; get; }
        public string City { set; get; }
        public string Address { set; get; }

        public Stock()
        {

        }
        public Stock(string country, string city, string address)
        {
            this.Country = country;
            this.City = city;
            this.Address = address;
        }

    }
}

