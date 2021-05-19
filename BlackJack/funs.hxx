#ifndef FUNS
#define FUNS
#include <cstdlib>
#include <iostream>
#include "playingCard.hxx"

int randomNumber() {
    int r = (rand() % 52);
    return r;
}

PlayingCard drawCard() {
    int tempInt = randomNumber();
    return deckOfCards.at(tempInt);
}
#endif