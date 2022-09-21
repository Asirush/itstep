using System;
namespace Inheritance.Model
{
    public enum FlashType { USB3, USB2, USB31, NONE }

    public class Flash : Storage
    {
        public FlashType FlashTypeProp { get; set; }
        public double VolumeSize { get; set; }
        public double AvailableVolumeSize { set; get; }


        public Flash() : this(0)
        {
        }
        public Flash(int Volume) : this(FlashType.NONE, Volume)
        {

        }
        public Flash(FlashType FlashType, double Volume)
        {
            this.FlashTypeProp = FlashType;
            this.VolumeSize = Volume;
        }

        public double GetFlashSpeed()
        {
            switch (FlashTypeProp)
            {
                case FlashType.USB2:
                    return 3000;
                case FlashType.USB3:
                    return 4000;
                case FlashType.USB31:
                    return 6000;

                default:
                    throw new Exception("Flash is not recognized");
            }
        }
        protected override double GetSize()
        {
            return VolumeSize;
        }
        protected override bool CopyData(Host host)
        {
            try
            {
                double time = (this.AvailableVolumeSize / host.GetCommonDataSize());
                for (int i = 0; i < time; i++)
                {
                    Console.WriteLine("Copying file: {0} of {1}", i, time);
                }
                return true;
            }
            catch
            {
                return false;
            }
        }
        protected override double GetFreeSize()
        {
            return AvailableVolumeSize;
        }
    }
}

