using System;
namespace Inheritance.Model
{
    public enum HDDType {HDD, SSD, M2, NONE}

    public class HDD:Storage
    {
        public HDDType HDDTypeProp { get; set; }
        public double VolumeSize { get; set; }
        public double AvailableVolumeSize { set; get; }


        public HDD() : this(0)
        {
        }
        public HDD(int Volume) : this(HDDType.NONE, Volume)
        {

        }
        public HDD(HDDType HDDType, double Volume)
        {
            this.HDDTypeProp = HDDType;
            this.VolumeSize = Volume;
        }

        public double GetHDDSpeed()
        {
            switch (HDDTypeProp)
            {
                case HDDType.HDD:
                    return 6000;
                case HDDType.SSD:
                    return 12000;
                case HDDType.M2:
                    return 20000;

                default:
                    throw new Exception("HDD is not recognized");
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
                for(int i = 0; i < time; i++)
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

