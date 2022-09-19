using System;
namespace lesson11
{
    public class Worker:IWorker
    {


        public Worker()
        {
        }

        public string Name {get; set;}
        public Specification Specification {get; set;}
        public double PricePerHour {get; set;}
    }
}

