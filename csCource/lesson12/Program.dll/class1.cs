using System;

namespace ConsoleApp{
    public class Class1{
    public delegate void GetMessage();
    public void ShowMessage(GetMessage _del){
        GetMessage del = _del;
        del.Invoke();
    }
}
}
