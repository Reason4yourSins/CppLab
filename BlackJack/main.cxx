#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "playingCard.hxx"
#include "funs.hxx"
#include "player.hxx"

int main(int argc, const char** argv) {
    srand((int)time(NULL));
    Player player;
    player.firstRoundPlayer();
    //firstRoundBot();
    return 0;
}