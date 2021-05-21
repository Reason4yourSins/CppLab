#ifndef DECKANDHANDS
#define DECKANDHANDS
#include "playingCard.hxx"
#include <array>
#include <vector>

//global variables need "extern"
extern std::array<PlayingCard, 52> deckOfCards;
extern std::vector<PlayingCard> handOfPlayer;
extern std::vector<PlayingCard> handOfBot;
#endif