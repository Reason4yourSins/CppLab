#include "playingCard.hxx"
#include "player.hxx"
#include "cards.hxx"
#include <vector>

Player::Player(std::vector<PlayingCard> handOfPlayer) {
    this->handOfPlayer = handOfPlayer;
}

Player::~Player() {};
/*
printing of custom types -> playingCard.cxx line 23
*/
void Player::addCardToHand() {
    handOfPlayer.push_back(drawCard());
    std::cout << handOfPlayer[0] << std::endl;
}

int Player::worthOfCurrentCards() {
    handOfPlayer[0].getCardWorth();
    return 0;
}

void Player::displayCards() {
    std::cout << "Empty stuff" << std::endl;
}