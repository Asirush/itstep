using System;
namespace lesson11
{
    public class House
    {

        private List<IParts> Parts = new List<IParts>();

        public House()
        {

        }

        public void CreateHouse(int a)
        {
            switch (a)
            {
                default:
                    break;
                case 1:
                    Basement basement = new Basement();
                    basement.Color = null;
                    basement.ConstructionTime = new TimeSpan(5, 8, 0, 0); // 5 days 8 hours 0 mins 0 secs
                    basement.Count = 1;
                    basement.MaterialPrice = 8000;
                    Walls walls = new Walls();
                    walls.Color = null;
                    walls.ConstructionTime = new TimeSpan(20, 0, 0);
                    walls.Count = 8;
                    walls.MaterialPrice = 600;
                    Door door = new Door();
                    door.Color = null;
                    door.ConstructionTime = new TimeSpan(0, 20, 0);
                    door.Count = 10;
                    door.MaterialPrice = 20;
                    Window window = new Window();
                    window.Color = null;
                    window.Count = 20;
                    window.ConstructionTime = new TimeSpan(0, 30, 0);
                    window.MaterialPrice = 100;
                    Roof roof = new Roof();
                    roof.Color = "red";
                    roof.ConstructionTime = new TimeSpan(1, 0, 0);
                    roof.Count = 1;
                    roof.MaterialPrice = 3000;
                    break;
                case 2:
                    break;
            }
        }


    }
}

