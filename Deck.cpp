// Mark Garcia
// Class (CECS 282-07)
// Prog 1 Solitaire Prime
// Due: Feb 12, 2020
#include "Deck.h"
#include "Card.h"
#include <iostream>;
#include <string>;

/*
this constructor makes a deck of 52 cards using the default card constructor
*/
Deck::Deck(){
	refreshDeck();
}
/*
creates the cards with an appropriate suit/rank
sets 'top' to 0 
*/
void Deck::refreshDeck(){
	int i = 0;
	for (int k = 0; k <= 3; k++) {
		for (int j = 1; j <= 13; j++) {
			storage[i].setCard(j, k);
			i++;
		}//end ranking
	}//end suit
	top = 0;
}
/*
returns the card at index top then increases top by 1
*/
Card Deck::deal(){
	return storage[top++];
}
/*
shuffles the deck by starting at the first index and replacing it with a card at a random index
within the deck of cards.
does this once for each card in the deck
*/
void Deck::shuffle(){
	for (int h = 0; h < 100; h++) {
		for (int i = 0; i <= 51; i++) {
			int j = rand() % 52;
			Card t1 = storage[i];
			Card t2 = storage[j];
			storage[j] = t1;
			storage[i] = t2;
		}
	}

}
/*
returns the amount of cards left
*/
int Deck::cardsLeft(){
	return 52 - top;
}
/*
displays every card and splits it every 13 cards to create a different line for each suit.
*/
void Deck::showDeck(){
	int count = 0;
	for (int i = 0; i < cardsLeft(); i++) {
		storage[i].showCard();
		count++;
		if (count == 13) {
			std::cout << "\n";
			count = 0;
		}
	}
}
