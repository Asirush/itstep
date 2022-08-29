using System;
namespace lesson4
{
    // usual class
    public class Car
    {
        // propertys
        public int Speed { get; set; }
        public string Model { get; private set; }
        public double Cost {
            get
            {
                return Cost_;
            }
            set
            {
                if (value < 0)
                {
                    Cost_ = 0;
                    throw new ArgumentException("Change cost");
                }
                else
                {
                    Cost_ = value;
                }
            }
        }

        // usual variables
        // usual variable is not allowed to controll editiing
        public int Year;
        private double Cost_;

        // constructor (initializer)
        // write ctor + TUBx2
        public Car() : this(0) // this(0) runs car(0) - next constructor
        {

        }

        public Car(int Speed) : this(Speed, "Unknown")
        {
            this.Speed = Speed;
        }

        public Car(int Speed, string Model)
        {
            this.Speed = Speed;
            this.Model = Model;
        }

        // link types and value types
        public void getSpeed(int speed) // working with copy
        {
            speed += 100;
        }

        public bool RefGetSpeed(ref int speed, out string plusCorrect) // manualy working with link (ref)
        {
            try
            {
                speed += 100;
                plusCorrect = "OK";
                return true;
            }
            catch(Exception ex)
            {
                plusCorrect = ex.Message;
                return false;
            }
            
            
        }

        public void getModel(carModel modelka)
        {

        }
    }

    // static class - doesnt need to create object
    // all stuff in static class is static too
    public static class CarSettings{
        /*
         Static class have no setters. Also it doesn't create an object, just run methods.
         */
        static CarSettings() { } // this constructo will run every time we call methods

        public static string GetSpeed(double speed)
        {
            return string.Format("{0:#,##}", speed);
        }
    }

    public class carModel
    {
        string model;
        carModel()
        {

        }
        public void carModelSet(string name)
        {
            model = name;
        }
    }

}

