using System;
namespace lesson4._2.libs
{
    public class Account
    {
        public int AccountID { get; set; }
        private double Ballance_;
        private int Currency_;
        private DateTime CreationDate_;


        public int Currency { get; set; } = 1; //1-kzt, 2-usd
        public double Ballance { get { return Ballance_; } set { if (value < 0) { Ballance_ = 0; } else { Ballance_ = value; } } }
        public DateTime CreationDate { get; set; }

        public string GetCurrencyName
        {
            get
            {
                if (Currency == 1)
                {
                    return "tenge";
                }
                else if (Currency == 2)
                {
                    return "usa dollar";
                }
                else return "incorrect";
            }
        }

    }
}

