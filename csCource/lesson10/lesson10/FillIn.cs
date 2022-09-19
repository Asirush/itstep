using System;
namespace lesson10
{
    public class FillIn
    {
        private List<Trans> TransportList = new List<Trans>();

        public FillIn()
        {
        }

        public void AddTrans(Trans a)
        {
            TransportList.Add(a);
        }
        public void PrintList()
        {
            foreach(Trans item in TransportList)
            {
                item.GetTransInfo();
            }
        }
    }
}

