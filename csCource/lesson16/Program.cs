using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization.Formatters.Soap;

namepsace Program{

    // User class
    public class User
    {
        public int UserId { get; set; }
        public string FullName { get; set; }
        public DateTime Dob { get; set; }

        [NonSerialized]
        public string IIN;

        public User(int UserId, string FullName, DateTime Dob)
        {
            this.UserId = UserId;
            this.FullName = FullName;
            this.Dob = Dob;
        }
        public override string ToString()
        {
            return String.Format("ID: {0};\n FullName: {1}", UserId, FullName)
        }
    }

    public static void Example02(){
        SoapFormatter formatter = new SoapFormatter();

        using(FileStream fs = new FileStream("user.dat", FileMode.OpenOrCreate)){
                formatter.Serialize(fs, user);
                Console.WriteLine("file is created");
        }

        using(FileStream fs = new FileStream("user.dat", FileMode.Open)){
            User newUser = (User) formatter.Deserealize(fs);
        }
    }

    public static void Example03(){
        XmlFormatter formatter = new XmlFormatter();

        using(FileStream fs = new FileStream("user.dat", FileMode.OpenOrCreate)){
                formatter.Serialize(fs, user);
                Console.WriteLine("file is created");
        }

        using(FileStream fs = new FileStream("user.dat", FileMode.Open)){
            User newUser = (User) formatter.Deserealize(fs);
        }
    }

    // Serializing and deserializing to binary file
    // works only with arrays
    internal class Program{

        static void Main(string[] args){

            User user = new User(1, "Yevgeniy Gertsen", DateTime.Now);
            BinaryFormatter formatter = new BinaryFormatter();

            using(FileStream fs = new FileStream("user.dat", FileMode.OpenOrCreate)){
                formatter.Serialize(fs, user);
                Console.WriteLine("file is created");
            }

            using(FileStream fs = new FileStream("user.dat", FileMode.Open)){
                User newUser = (User) formatter.Deserealize(fs);
            }

        }
    }
}