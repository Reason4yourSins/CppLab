#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "cards.hxx"
#include "playingCard.hxx"
#include "player.hxx"
#include "bot.hxx"
using namespace std;

int main(int argc, const char** argv) {
    srand((int)time(NULL));
    cout << "Nothing here yet..." << endl;
    Player playerOne;
    playerOne.addCardToHand();
    return 0;
}
