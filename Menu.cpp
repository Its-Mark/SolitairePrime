// Mark Garcia
// Class (CECS 282-07)
// Prog 1 Solitaire Prime
// Due: Feb 12, 2020
#include "Card.h";
#include "Deck.h";
#include <iostream>;
using namespace std;

bool isPrime(int x) {
    if (x <= 1) { return false; }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
        
        int userInput;
        bool gameRunning = true;
        Deck masterDeck = Deck();
        int piles = 0;
        int sum = 0;
        while (gameRunning) {
            cout << "\nWelcome to Solitaire Prime! Choose (1-5)";
            cout << "\n1. New Deck \n2. Display Deck \n3. Shuffle Deck\n4.Play Solitaire Prime \n5.Exit\n";
            cin >> userInput;
            if (userInput == 1) {
                masterDeck.refreshDeck();
                cout << "New Deck Generated....\n";
            }
            else if (userInput == 2) {
                cout << "This is the deck:\n";
                masterDeck.showDeck();

            }
            else if (userInput == 3) {
                masterDeck.shuffle();
                cout << "Deck Shuffled....\n";
            }
            else if (userInput == 4) {
                sum = 0;
                cout << "Playing Solitaire Prime!!!\n\n";
                for (int i = 0; i < 52; i++) {
                    Card t = masterDeck.deal();
                    sum += t.getValue();
                    bool x = isPrime(sum);
                    t.showCard();
                    if (x) {
                        cout << " Prime: " + to_string(sum) + "\n";
                        sum = 0;
                        piles++;
                    }
                }
                if (masterDeck.cardsLeft() == 0) {
                    if (sum == 0) {
                        cout << "\nWinner in " + to_string(piles) + " piles!\n\n";
                        piles = 0;
                    }
                    else {
                        cout << "Loser\n\n";
                        piles = 0;
                    }
                }
            }
            else if (userInput == 5) {
                gameRunning = false;
            }
        }

}