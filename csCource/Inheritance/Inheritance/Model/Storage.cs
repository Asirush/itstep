using System;
namespace Inheritance.Model
{
    public abstract class Storage
    {
        protected string StorageName { set; get; }
        protected string Model { set; get; }

        protected abstract double GetSize();
        protected abstract bool CopyData(Host host);
        protected abstract double GetFreeSize();
        protected virtual string GetStorageData()
        {
            return string.Format("Storage Name: {0}\nStorage Model: {1}", StorageName, Model);
        }

        public Storage()
        {
        }
    }
}

