using System;
using LiteDB;

namespace lesson4._2.libs
{
    public class Bank
    {
        public Bank(string Path)
        {
            Clients = new Client[2];
            Clients[0] = new Client()
            {
                Name = "Assir",
                Surname = "Abdukhalikov",
                UserID = 001,
                PhoneNumber = "+7(707)268-47-36",
            };
            this.Path = Path;
        }

        public List<Client> Clients { get; set; }
        public string Path{ get; set; }

        public bool Registration(Client user, out string message)
        {
            try
            {
                if (GetClient(user.IIN) != null)
                {
                    message = "Client is already exist";
                    return false;
                }
                else {
                    using (var db = new LiteDatabase(@"$HOME/Documents/itstep/csCourse/lesson6/database.db"))
                    {
                        var users = db.GetCollection<Client>("Users");
                        users.Insert(user);
                        message = "Succsessful";
                        return true;
                    }

                }
                
            }
            catch (Exception ex)
            {
                message = ex.Message;
                return false;
            }
        }
        public Client GetClient(string IIN)
        {
            Client user = null;
            try
            {
                using (var db = new LiteDatabase(@"$HOME/Documents/itstep/csCourse/lesson6/database.db"))
                {
                    var users = db.GetCollection<Client>("Users");
                    user = users.FindOne(f => f.IIN == IIN);
                }
            }
            catch (Exception ex)
            {
                user = null;
            }
            return user;
        }
    }
}

