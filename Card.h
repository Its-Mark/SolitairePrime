// Mark Garcia
// Class (CECS 282-07)
// Prog 1 Solitaire Prime
// Due: Feb 12, 2020
#include <string>
#ifndef CARD_H
#define CARD_H


class Card{
private:
	int rank;
	int suit;

public:
	Card();
	Card(int r, int s);
	void setCard(int r, int s);
	int getValue();
	int getSuit();
	void showCard();
};
#endif //CARD.H

