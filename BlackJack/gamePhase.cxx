#include "gamePhase.hxx"
#include <iostream>

int gamePhase::gameOver() {
    std::cout << "Game is done everyone" << std::endl;
    stillPlaying = false;
    return 1;
}