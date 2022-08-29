namespace lesson4
{
    internal class Program
    {
        static void Main()
        {
            Car car = new Car();
            car.Speed = 100;

            CarSettings.GetSpeed(200);

            int speed = 0;
            car.getSpeed(speed);
        }
    }

}