#ifndef BOT
#define BOT
#include "playingCard.hxx"
#include <vector>

class Bot {
    public:
        Bot();
        ~Bot();
        void addCardToHand();
        int worthOfCurrentCards();
        void displayCards();
        void firstRoundBot();
};
#endif