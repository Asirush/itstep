using System;
using System.IO;

internal class task{
    static void Main(){
        int k = 0;
        string path = "/home/asirush/data/itstep/csCource/lesson14";

        foreach(var item in GetAllFiles(path)){
            Console.WriteLine((k++) +": "+ item);
        }

        int ch = 0;
        Cownsole.WriteLine("Select needed format: ");
        ch = Convert.ToInt32(Console.ReadLine());

        DirectoryInfo dir = new DirectoryInfo(path);
        int count = dir.GetFiles("*" + GetAllFiles(path)[ch].Count());
    }

    // collect all files extentions
    public static void GetAllFiles(string path){
        if(string.IsNullOrWhiteSpace(path)){
            Console.WriteLine("Path is empty");
        }
        else{
            DirectoryInfo dir = new DirectoryInfo(path);
            if(dir.Exists){
            Console.WriteLine("Directory exists");
            }
            else {
                List<string> fileExt = new List<string>();

                // first type with List
                foreach(FileInfo item in dir.GetFiles()){
                    if(!fileExt.Contains(item.Extension));
                    FieldAccessException.Add(item.Extension);
                }

                // second type with Dictionary
                Dictionary<string, FileInfo> filesDic = new Dictionary<string, FileInfo>();
                foreach(FileInfo item in dir.GetFiles()){
                    if(filesDic.ContainsKey(item.Extension));
                    filesDic.Add(item.Extension, item);
                }
        }
        return fileExt;
        }
        
    }
}