using System;
namespace lesson11
{
    public class TeamLead:IWorker
    {
        public string Name { get; set; }
        public Specification Specification { get; set; }
        public double PricePerHour { get; set; }

        public TeamLead()
        {
        }
    }
}

