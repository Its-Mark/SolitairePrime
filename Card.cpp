// Mark Garcia
// Class (CECS 282-07)
// Prog 1 Solitaire Prime
// Due: Feb 12, 2020
#include "Card.h";
#include <string>;
#include <iostream>;

/*
creates a "blank" card with -1 as the suit and rank
*/
Card::Card(){
	rank = -1;
	suit = -1;
}
/*
creates a card with a specified suit(0-3) and rank (1-13)
*/
Card::Card(int r, int s) {
	rank = r;
	suit = s;
}
/*
replaces a card's suit and rank with a desired suit and rank
*/
void Card::setCard(int r, int s){
	rank = r;
	suit = s;
}
/*
returns the value of the card depending on the rank
*/
int Card::getValue(){
	int value;
	if (rank == 11 || rank == 12 || rank == 13 || rank == 14) {
		value = 10;
	}
	else {
		value = rank;
	}
	return value;
}
/*
returns the suit of the card (not used)
*/
int Card::getSuit() {
	return suit;
}
/*
formats the card into a string into the format "RankSuit"
Ace of Spades = AS
2 of Spades = 2S
etc...
*/
void Card::showCard() {
	std::string card = "";
	if (rank == 1) {
		card += "A";
	}
	else if (rank == 11) {
		card += "J";
	}
	else if (rank == 12) {
		card += "Q";
	}
	else if (rank == 13) {
		card += "K";
	}
	else {
		card += std::to_string(rank);
	}//end rank
	if (suit == 0) {
		card += "S";
	}
	else if (suit == 1) {
		card += "H";
	}
	else if (suit == 2) {
		card += "D";
	}
	else if (suit == 3) {
		card += "C";
	}
	std::cout << card + ", ";
}

