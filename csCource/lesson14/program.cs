using System;
using System.IO;

internal class program{
    static void Main(string[] args){

    }

    public void Example(){
        FileStream fs = new FileStream(@"/home/asirush/data/itstep/csCource/lesson14/text.txt", FileMode.Create);

        FileStream fs2 = new FileStream(@"/home/asirush/data/itstep/csCource/lesson14/text.txt", FileMode.Create, FieldAccessException.Write, FileShare.None);
    }

    public void Example2(){
        FileInfo f = new FileInfo(@"/home/asirush/data/itstep/csCource/lesson14/text.txt");

        if(!f.Exists){
            FileStream fs = false.Create();
            fs.Close();
        }

        using (FileStream fs = f.Open(FileMode.Open, FileAccess.ReadWrite, FileShare.None)){

        }
    }

    public static void Example3(){
        DirectoryInfo dir = new DirectoryInfo(".");
        DirectoryInfo dir2 = new DirectoryInfo(@"/home/asirush/data/itstep/csCource/lesson14/TEST");
    }

    public static void Example4(){
        DirectoryInfo dir = new DirectoryInfo(@"/home/asirush/data/itstep/csCource/lesson14");
        Console.WriteLine("Info about directory");
        Console.WriteLine("Path: {0}\nFolderName: {1}\nRootDirectory: {2}", dir.FullName, dir.Name, dir.Parent);

        foreach(FileInfo file in dir.GetFiles()){
            Console.WriteLine("->> "+file.Name);
        }

        FileInfo[] fileHtml = dir.GetFiles("*.html", SearchOption.AllDirectories);
    }

    public static void Eample5(){
        string path = @"/home/asirush/data/itstep/csCource/lesson14/text.txt";
        try{
            // read full file
            using(StreamReader sr = new StreamReader(path)){
                Console.WriteLine(sr.ReadToEnd());
            }

            // read each line of file
            using(StreamReader sr = new StreamReader(path)){
                string line;
                while((line == sr.ReadLine())!=null){
                    Console.WriteLine(line);
                }
            }

            // read to array
            using(StreamReader sr = new StreamReader(path)){
                char[] array = new char[4];
                sr.Read(array, 0, 4);
                Console.WriteLine(array);
            }
        }
        catch(Exception ex){

        }
    }

    public static void Example6(){
        string path = @"/home/asirush/data/itstep/csCource/lesson14/text.txt";
        using(StreamWriter sw = new StreamWriter(path, true, System.Text.Encoding.Default)){
            sw.Write("\n--> "+ DateTime.Now.ToLongTimeString());
        }
    }

    public static void Example7(){
        DriveInfo[] di = DriveInfo.GetDrives();
        foreach(var item in di){
            Console.WriteLine(item.Name);
        }
        DriveInfo c = new DriveInfo("C");
        Cosnole.WriteLine(c.TotalSize);
        Cosnole.WriteLine(c.AvailableFreeSpace);
        Cosnole.WriteLine(c.DriveFormat);
        Cosnole.WriteLine(c.DriveType);
        Cosnole.WriteLine(c.Name);
    }
}
