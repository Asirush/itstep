using System;
namespace lesson10
{
    public abstract class Trans
    {
        public Trans() : this(0,0) // by default sets  0 0
        {

        }
        public Trans(int carWeight, int maxWeight)
        {
            this.CarWeight = carWeight;
            this.MaxWeight = maxWeight;
        }


        public string CarType { set; get; }
        public int CarWeight { set; get; }
        public int MaxWeight { set; get; }

        public abstract void GetTransInfo(); // abstract needed to be set for every subclass
        public virtual string WeightInfo() // virtual sets by default for every subclass
        {
            return string.Format("Weight capacity: {0}", this.MaxWeight - this.CarWeight);
        }

    }

    public interface ITrans // interface, class based on it is called Transport
    {
        string CarType { set; get; }
        int CarWeight { set; get; }
        int MaxWeight { set; get; }

        void GetTransInfo();
    }
}

