using System;
namespace lesson10
{
    public class Bike:Trans
    {
        public Bike(int a, int b):base(a, b)
        {

        }

        public string BikeBrand { set; get; }
        public string BikeModel { set; get; }
        public int BikeSpeed { set; get; }

        public override void GetTransInfo()
        {

        }
        public override string WeightInfo()
        {
            return base.WeightInfo();
        }
    }
}

