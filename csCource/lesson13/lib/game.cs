using System;

namespace GameApp{
   public class Game{
    public List<Card> CardDeck {get;set;}
    public List<Card> GetCardDeck(){
        Random rnd = new Random();

        foreach(var item in (Suit[])Enum.GetValues(typeof(Suit))){
            for(int i = 6; i <=14; i++){
                Card tmp = new Card(item, i);
                this.CardDeck.Add(tmp);
            }
        }
        return this.CardDeck;
    }

    public bool Distribution(List<player> players){
        int count = players.Count;
        int i =0;
        foreach(Card item in CardDeck){
            players[i].CardDeck.Add(item);

            if(i <= count)
                i++;
            else
                i = 0;
        }
    }
   }
}
