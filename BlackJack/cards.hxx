#ifndef CARDS
#define CARDS
#include "playingCard.hxx"
#include <iostream>
#include <array>
#include <string>
#include <cstdlib>

std::array<PlayingCard, 52> deckOfCards = {
    PlayingCard("Two", "Hearts", 2),
    PlayingCard("Three", "Hearts", 3),
    PlayingCard("Four", "Hearts", 4),
    PlayingCard("Five", "Hearts", 5),
    PlayingCard("Six", "Hearts", 6),
    PlayingCard("Seven", "Hearts", 7),
    PlayingCard("Eight", "Hearts", 8),
    PlayingCard("Nine", "Hearts", 9),
    PlayingCard("Ten", "Hearts", 10),
    PlayingCard("Jack", "Hearts", 10),
    PlayingCard("Queen", "Hearts", 10),
    PlayingCard("King", "Hearts", 10),
    PlayingCard("Ace", "Hearts", 11),
    PlayingCard("Two", "Spades", 2),
    PlayingCard("Three", "Spades", 3),
    PlayingCard("Four", "Spades", 4),
    PlayingCard("Five", "Spades", 5),
    PlayingCard("Six", "Spades", 6),
    PlayingCard("Seven", "Spades", 7),
    PlayingCard("Eight", "Spades", 8),
    PlayingCard("Nine", "Spades", 9),
    PlayingCard("Ten", "Spades", 10),
    PlayingCard("Jack", "Spades", 10),
    PlayingCard("Queen", "Spades", 10),
    PlayingCard("King", "Spades", 10),
    PlayingCard("Ace", "Spades", 11),
    PlayingCard("Two", "Diamonds", 2),
    PlayingCard("Three", "Diamonds", 3),
    PlayingCard("Four", "Diamonds", 4),
    PlayingCard("Five", "Diamonds", 5),
    PlayingCard("Six", "Diamonds", 6),
    PlayingCard("Seven", "Diamonds", 7),
    PlayingCard("Eight", "Diamonds", 8),
    PlayingCard("Nine", "Diamonds", 9),
    PlayingCard("Ten", "Diamonds", 10),
    PlayingCard("Jack", "Diamonds", 10),
    PlayingCard("Queen", "Diamonds", 10),
    PlayingCard("King", "Diamonds", 10),
    PlayingCard("Ace", "Diamonds", 11),
    PlayingCard("Two", "Clubs", 2),
    PlayingCard("Three", "Clubs", 3),
    PlayingCard("Four", "Clubs", 4),
    PlayingCard("Five", "Clubs", 5),
    PlayingCard("Six", "Clubs", 6),
    PlayingCard("Seven", "Clubs", 7),
    PlayingCard("Eight", "Clubs", 8),
    PlayingCard("Nine", "Clubs", 9),
    PlayingCard("Ten", "Clubs", 10),
    PlayingCard("Jack", "Clubs", 10),
    PlayingCard("Queen", "Clubs", 10),
    PlayingCard("King", "Clubs", 10),
    PlayingCard("Ace", "Clubs", 11)
};

int randomNumber() {
    int r = (rand() % 52);
    return r;
}

PlayingCard drawCard() {
    int tempInt = randomNumber();
    return deckOfCards.at(tempInt);
}
#endif