using System;
namespace Inheritance.Model
{
    public class Host
    {
        public int FileCount { get { return Files.Count; } }
        public List<File> Files = new List<File>();

        public File this[int index]
        {
            get => Files[index];
            set => Files[index] = value;
        }

        public double GetCommonDataSize()
        {
            double result = 0;
            foreach (var item in Files)
            {
                result = result + item.GetFileSize();
            }
            return result;
        }
        public void AddFile(double filesize)
        {
            File a = new File(filesize);
            Files.Add(a);
        }

    }
}

