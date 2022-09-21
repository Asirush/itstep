using System;
namespace Inheritance.Model
{
    public class File
    {
        public double FileSize { set; get; }

        public File(double size)
        {
            FileSize = size;
        }

        public double GetFileSize()
        {
            return FileSize;
        }
    }
}

