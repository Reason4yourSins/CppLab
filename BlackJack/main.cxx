#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "playingCard.hxx"
#include "player.hxx"
#include "bot.hxx"
using namespace std;

int main(int argc, const char** argv) {
    srand((int)time(NULL));
    int sumOfCurrentHand = 0;
    Player playerOne;
    playerOne.addCardToHand();
    playerOne.addCardToHand();
    playerOne.displayCards();
    sumOfCurrentHand += playerOne.worthOfCurrentCards();
    cout << sumOfCurrentHand << endl;
    return 0;
}
