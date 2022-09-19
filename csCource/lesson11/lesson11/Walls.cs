using System;
namespace lesson11
{
    public class Walls:IParts
    {
        public Walls()
        {
        }

        public string Color {get;set;}
        public TimeSpan ConstructionTime {get;set;}
        public int Count {get;set;}
        public MaterialType MaterialType {get;set;}
        public double MaterialPrice {get;set;}

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

