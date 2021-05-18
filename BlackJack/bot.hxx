#ifndef BOT
#define BOT
#include "playingCard.hxx"
#include <vector>

class Bot {
    private:
        std::vector<PlayingCard> handOfBot = {};

    public:
        Bot(std::vector<PlayingCard> handOfBot);
        ~Bot();
        void addCardToHand();
        int worthOfCurrentCards();
        void displayCards();
};
#endif