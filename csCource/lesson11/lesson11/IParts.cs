using System;
using lesson11;

namespace lesson11
{
    public interface IParts
    {
        string Color { set; get; }
        TimeSpan ConstructionTime { set; get; }
        int Count { set; get; }
        MaterialType MaterialType { set; get; }
        double MaterialPrice { set; get; }

        double GetBuildCost();
        TimeSpan GetBuildTime();
    }
}

