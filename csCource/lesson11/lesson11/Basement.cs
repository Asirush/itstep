using System;

namespace lesson11
{
    public class Basement: IParts
    {
        public string Color {set;get;}
        public TimeSpan ConstructionTime {set;get;}
        public int Count {set;get;}
        public MaterialType MaterialType {set;get;}
        public double MaterialPrice {set;get;}

        // Return costs of buildings
        double IParts.GetBuildCost()
        {
            return MaterialPrice * Count;
        }

        // Return time loss for building
        TimeSpan IParts.GetBuildTime()
        {
            return TimeSpan.FromTicks(ConstructionTime.Ticks * Count);
        }


    }
}

