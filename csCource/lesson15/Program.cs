using System;
using System.IO;
using System.Collections.Generic;

namespace Program{

internal class Program{
    static void Main(){
        int k = 0;
        string path = "/home/asirush/data/itstep/csCource/lesson15/dir";

        foreach(var item in GetAllFiles(path)){
            Console.WriteLine((k++) +": "+ item);
        }

        int ch = 0;
        Console.WriteLine("Select needed format: ");
        ch = Convert.ToInt32(Console.ReadLine());

        DirectoryInfo dir = new DirectoryInfo(path);
        // int count = dir.GetFiles("*" + GetAllFiles(path)[ch].Count());
    }

    // collect all files extentions
    public static List<string> GetAllFiles(string path){
        if(string.IsNullOrWhiteSpace(path)){
            List<string> empty = new List<string>();
            Console.WriteLine("Path is empty");
            return empty;
        }
        else{
            DirectoryInfo dir = new DirectoryInfo(path);
            if(dir.Exists){
            Console.WriteLine("Directory exists");
            List<string> empty = new List<string>();
            Console.WriteLine("Path is empty");
            return empty;
            }
            else {
                List<string> fileExt = new List<string>();

                // first type with List
                foreach(FileInfo item in dir.GetFiles()){
                    if(!fileExt.Contains(item.Extension)){
                        fileExt.Add(item.Extension);
                    }
                }

                // second type with Dictionary
                Dictionary<string, FileInfo> filesDic = new Dictionary<string, FileInfo>();
                foreach(FileInfo item in dir.GetFiles()){
                    if(filesDic.ContainsKey(item.Extension));
                    filesDic.Add(item.Extension, item);
                }
                return fileExt;
                }
        }
        
    }

    public static void GetName(string path){
        DirectoryInfo dir = new DirectoryInfo(path);

        List<string> pattern = new List<string>();
        foreach(FileInfo f in dir.GetFiles()){
            if(f.Name.Contains("-")){
                f.MoveTo(f.FullName+@"\"+f.Name.Replace("-", ""));
            }
        }

    }
}
}