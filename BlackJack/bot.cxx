#include "playingCard.hxx"
#include "bot.hxx"
#include "deckAndHands.hxx"
#include "funs.hxx"
#include <vector>
#include <iostream>

Bot::Bot() {};

Bot::~Bot() {};

void Bot::addCardToHand() {
    handOfBot.push_back(drawCard());
}

int Bot::worthOfCurrentCards() {
    int sumOfCards = 0;
    for(PlayingCard card : handOfBot) {
        sumOfCards += card.getCardWorth();
    }
    return sumOfCards;
}

void Bot::displayCards() {
    for (PlayingCard card : handOfBot) {
        std::cout << card;
    }
}

int Bot::firstRoundBot() {
    int sumOfCurrentBot = 0;
    Bot botOne;
    botOne.addCardToHand();
    botOne.addCardToHand();
    sumOfCurrentBot += botOne.worthOfCurrentCards();
    if (sumOfCurrentBot == 21) {
        return 1;
    }
    return 0;
}