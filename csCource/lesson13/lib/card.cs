using System;

namespace GameApp{
    public enum Suit {Hearts, Diamonds, Clubs, Spades} //черви буби трефы пики
    public class Card{
        public Suit Suit {set;get;}
        public int CardNumber {get;set;}
        public bool IsTrump{get;set;} = false;

        public card(Suit suit, int cardNumber)
        {
            this.CardNumber = cardNumber;
            this.Suit = suit;
        }

    }
}
