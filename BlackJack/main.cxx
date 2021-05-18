#include <iostream>
#include <array>
#include <stdlib.h>
#include <ctime>
#include "cards.hxx"
#include "playingCard.hxx"
using namespace std;

int main(int argc, const char** argv) {
    srand((int)time(NULL));
    playersHand();
    return 0;
}
