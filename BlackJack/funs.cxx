#include <cstdlib>
#include "playingCard.hxx"
#include "funs.hxx"
#include "deckAndHands.hxx"
#include <array>

int randomNumber() {
    int r = (rand() % 52);
    return r;
}

PlayingCard drawCard() {
    int tempInt = randomNumber();
    return deckOfCards.at(tempInt);
}
// func to check of Hand worth is 21
int isTwentyOne() {
    
}