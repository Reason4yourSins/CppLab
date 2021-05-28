#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "playingCard.hxx"
#include "funs.hxx"
#include "player.hxx"
//{}
int main(int argc, const char** argv) {
    srand((int)time(NULL));
    std::cout << "Welcome to my shitty BlackJack!" << std::endl;
    Player player;
    if ((player.firstRoundPlayer()) == 1)
    {
        std::cout << "BlackJack" << std::endl;
    }
    return 0;
}
/*
[]Problem Erkennen
[]Plan wie er das Problem lösen will
[]Plan was ich wann lernen will (wie gestalte ich meinen nächsten Monat so, dass ich genug lerne,
  aber auch nicht nur lerne)
[]mit Liste was ich kann und was nicht + Lösungsansatz zu ELWMS gehen
[]Risikomanagement -> impact & likelyhood (Ausmaß und Wahrscheinlichkeit)
*/