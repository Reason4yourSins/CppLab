#include "playingCard.hxx"
#include "player.hxx"
#include "deckAndHands.hxx"
#include "funs.hxx"
#include <vector>
#include <iostream>

Player::Player() {};

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
        std::cout << card;
    }
}

// instance is implicit
int Player::firstRoundPlayer() {
    int sumOfCurrentHand = 0;
    this->addCardToHand();
    this->addCardToHand();
    this->displayCards();
    sumOfCurrentHand += this->worthOfCurrentCards();
    if (sumOfCurrentHand == 21) {
        std::cout << sumOfCurrentHand << std::endl;
        return 1;
    }
    std::cout << sumOfCurrentHand << std::endl;
    return 0;
}