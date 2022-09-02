using System;
namespace lesson4._2.libs
{
    public class Address
    {
        public string Country { get; set; }
        public string City { get; set; }
        public string Street { get; set; }
        public string House { get; set; }

        public Address(string country, string city, string street, string house)
        {
            this.Country = country;
            this.City = city;
            this.Street = street;
            this.House = house;
        }
    }
}

