#include <cstdlib>
#include "playingCard.hxx"
#include "funs.hxx"
#include "deckAndHands.hxx"
#include <array>
#include <iostream>

int randomNumber() {
    int r = (rand() % 52);
    return r;
}

PlayingCard drawCard() {
    int tempInt = randomNumber();
    return deckOfCards.at(tempInt);
}