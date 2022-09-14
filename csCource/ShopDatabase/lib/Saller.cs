using System;
using System.Collections.Generic;
using LiteDB;

namespace lib.BLL
{
    public class Saller
    {
        public int SallerID { set; get; }
        public string SallerName { set; get; }
        public List<Product> ProductList { set; get; }
        public DateTime LastLoginDate { set; get; }
        private string Login { set; get; }
        private string Password { set; get; }

        public Saller()
        {

        }

    }
}

