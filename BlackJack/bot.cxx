#include "playingCard.hxx"
#include "bot.hxx"
#include "cards.hxx"
#include <vector>

Bot::Bot(std::vector<PlayingCard> handOfBot) {
    this->handOfBot = handOfBot;
}

Bot::~Bot() {};

void Bot::addCardToHand() {
    handOfBot.push_back(drawCard());
    std::cout << handOfBot[0] << std::endl;
}

int Bot::worthOfCurrentCards() {
    handOfBot[0].getCardWorth();
    return 0;
}

void Bot::displayCards() {
    std::cout << "Empty stuff" << std::endl;
}