using System;

namespace lib.BLL
{
    public class Product
    {
        public int VendorCode { set; get; }
        public string Name { set; get; }
        public Stock Stock { set; get;}
        public bool Availability { set; get; }
        public int Quantity { set; get; }
        public DateTime ArrivalDate { set; get; }
        public DateTime DateOfDelivery { set; get; }
        public double Discount { set; get; }
        public double Price { set; get; }
        public double BasePrice { set; get; }
        public int ProductSallerID { set; get; }

        public Product()
        {

        }


    }
}

