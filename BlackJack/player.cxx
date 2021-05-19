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
}

int Player::worthOfCurrentCards() {
    int sumOfCards = 0;
    for (PlayingCard card : handOfPlayer) {
        sumOfCards += card.getCardWorth();
    }
    return sumOfCards;
}

void Player::displayCards() {
    for (PlayingCard card : handOfPlayer) {
        std::cout << card << std::endl;
    }
}