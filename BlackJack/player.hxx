#ifndef PLAYER
#define PLAYER
#include "playingCard.hxx"
#include <vector>

class Player {
    public:
        Player();
        ~Player();
        void addCardToHand();
        int worthOfCurrentCards();
        void displayCards();
        int firstRoundPlayer();
};
#endif