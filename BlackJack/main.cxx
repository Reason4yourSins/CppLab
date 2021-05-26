#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "playingCard.hxx"
#include "funs.hxx"
#include "player.hxx"
//{}
int main(int argc, const char** argv) {
    srand((int)time(NULL));
    Player player;
    if ((player.firstRoundPlayer()) == 1)
    {
        std::cout << "You won!" << std::endl;
        return 0;        
    }
    return 0;
}