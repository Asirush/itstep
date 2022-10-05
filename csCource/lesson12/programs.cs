using System;
using Program.Class1;

namespace ConsoleApp{
    internal class programs{
        delegate void GetMessage();
        delegate int Operation(int x, int y);

        static void Main(string[] args){
////////////////////////////////////////////////
            // Class1 cl = new Class1();

            // if(DateTime.Now.Hour < 12){
            //     cl.ShowMessage(GoodMorning);
            // }
            // else{
            //     cl.ShowMessage(GoodEvening);
            // }
/////////////////////////////////////////////////
            // Operation del = new Operation(Add);
            // int result = del.Invoke(4, 5);

            // ShowMessage(GoodMorning);
/////////////////////////////////////////////////
            Account account = new Account(200,6);
            account.RegisterHandler(PrintMessage);
        }

        private static void PrintMessage(string message){
            Console.Writeline(message);
        }

        private static void ShowMessage(GetMessage delM){
            delM.Invoke();
        }

        private static int Add (int x, int y){
            return x + y;
        }

        private static int Multiply(int x, int y){
            return x * y;
        }

        private static void GoodMorning(){
            Console.Writeline("good morning");
        }

        private static void GoodEvening(){
            Console.Writeline("good evening");
        }
    }
}

public class Account{
    int _sum;
    int _percentage;

    public Account(int _sum, int _percentage)
    {
        this._sum = _sum;
        this._percentage = _percentage;
    }

    public delegate void AccountStateHedler(string message);
    AccountStateHedler del;

    public void RegisterHandler(AccountStateHedler _del){
        del = _del;
    }

    public int CurrentSum{
        get {return _sum;}
    }
    public void Put(int sum){
        _sum += sum;
    }

    public void Withdraw(int sum){
        if(sum <= _sum){
            _sum -= sum;
            if(del != null){
                del("Sum "+sum+ " deleted from your account");
            }
        }
        else{
            if(del!=null){
                del("Not enough resources");
            }
        }
    }
}