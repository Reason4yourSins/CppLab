#ifndef PLAYER
#define PLAYER
#include "playingCard.hxx"
#include <vector>

class Player {
    private:
        std::vector<PlayingCard> handOfPlayer = {};

    public:
        Player(std::vector<PlayingCard> handOfPlaye);
        ~Player();
        void addCardToHand();
        int worthOfCurrentCards();
        void displayCards();
};
#endif