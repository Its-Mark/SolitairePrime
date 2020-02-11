// Mark Garcia
// Class (CECS 282-07)
// Prog 1 Solitaire Prime
// Due: Feb 12, 2020
#include "Card.h"
#ifndef DECK_H
#define DECK_H


class Deck{
private:
	Card storage[52];
	int top = 0;

public:
	Deck();
	void refreshDeck();
	Card deal();
	void shuffle();
	int cardsLeft();
	void showDeck();

};
#endif // !DECK.H
