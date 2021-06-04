#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "playingCard.hxx"
#include "funs.hxx"
#include "player.hxx"
#include "bot.hxx"
//{}
int main(int argc, const char** argv) {
    srand((int)time(NULL));
    std::cout << "Welcome to BlackJack!" << std::endl;
    Player player;
    Bot bot;
    player.firstRoundPlayer();
    bot.firstRoundBot();
    return 0;
}