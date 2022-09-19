using System;
namespace lesson11
{
    public interface IWorker
    {
        string Name { set; get; }
        Specification Specification { set; get; }
        double PricePerHour { set; get; }
        List<IParts> TaskList = new List<IParts>();
    }
}

