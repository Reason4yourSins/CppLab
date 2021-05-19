#ifndef PLAYER
#define PLAYER
#include "playingCard.hxx"
#include <vector>

class Player {
    private:
        
    public:
        Player();
        ~Player();
        void addCardToHand();
        int worthOfCurrentCards();
        void displayCards();
};
#endif