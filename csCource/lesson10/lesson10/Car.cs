using System;
namespace lesson10
{
    public class Car:Trans
    {
        public Car()
        {

        }
        public Car(int a)
        {
            CarsMexSpeed = a;
        }

        private readonly int CarsMexSpeed;
        public string Brand { set; get; }
        public string Model { set; get; }
        private int MaxSpeed_;

        public int MaxSpeed
        {
            set
            {
                if(value > CarsMexSpeed) { throw new Exception("Wrong value"); }
                else { MaxSpeed_ = value; }
            }
            get
            {
                return MaxSpeed_;
            }
        }

        public override void GetTransInfo()
        {
            Console.Write("_______________\nCar model: {0}\nMaximum Weight: ", CarType);
            Console.WriteLine(base.WeightInfo());
        }
    }
}

