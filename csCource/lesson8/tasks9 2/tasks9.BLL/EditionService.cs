using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tasks9.BLL
{
    public class EditionService : Edition
    {
        public string Editons()
        {
            List<Edition> editionList = new List<Edition>();
            editionList.Add(new Book()
            {
                Title = "Алые Паруса",
                Author = "Александр Грин",
                PublishYear = new DateTime(1916),
                Director = "Александр Грин"
            });
            editionList.Add(new Article("Влияние телефонов на восприятие на задних парт", "SEP-"))

            return editionList.ToString();
        }
        public override void GetEditionInfo()
        {
            Console.WriteLine(Editons());
        }
    }
}
