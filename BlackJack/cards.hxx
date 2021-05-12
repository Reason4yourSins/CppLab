#include "tryout.hxx"
// #include <vector>
#include <array>
#include <string>
#include <cstdlib>
#include <ctime>

// const std::vector<std::string> deckOfCards = {"Ace of Hearts", "King of Hearts", "Six of Clubs"};

const std::array<PlayingCard, 52> deckOfCards = {
    PlayingCard("Two", "Hearts", 2),
    PlayingCard("Three", "Hearts", 3),
    PlayingCard("Four", "Hearts", 4),
    PlayingCard("Five", "Hearts", 5),
    PlayingCard("Six", "Hearts", 6),
    PlayingCard("Seven", "Hearts", 7),
    PlayingCard("Eight", "Hearts", 8),
    PlayingCard("Nine", "Hearts", 9),
    PlayingCard("Ten", "Hearts", 10),
    PlayingCard("Jack", "Hearts", 11),
    PlayingCard("Queen", "Hearts", 12),
    PlayingCard("King", "Hearts", 13),
    PlayingCard("Ace", "Hearts", 14),
    PlayingCard("Two", "Spades", 2),
    PlayingCard("Three", "Spades", 3),
    PlayingCard("Four", "Spades", 4),
    PlayingCard("Five", "Spades", 5),
    PlayingCard("Six", "Spades", 6),
    PlayingCard("Seven", "Spades", 7),
    PlayingCard("Eight", "Spades", 8),
    PlayingCard("Nine", "Spades", 9),
    PlayingCard("Ten", "Spades", 10),
    PlayingCard("Jack", "Spades", 11),
    PlayingCard("Queen", "Spades", 12),
    PlayingCard("King", "Spades", 13),
    PlayingCard("Ace", "Spades", 14),
    PlayingCard("Two", "Diamonds", 2),
    PlayingCard("Three", "Diamonds", 3),
    PlayingCard("Four", "Diamonds", 4),
    PlayingCard("Five", "Diamonds", 5),
    PlayingCard("Six", "Diamonds", 6),
    PlayingCard("Seven", "Diamonds", 7),
    PlayingCard("Eight", "Diamonds", 8),
    PlayingCard("Nine", "Diamonds", 9),
    PlayingCard("Ten", "Diamonds", 10),
    PlayingCard("Jack", "Diamonds", 11),
    PlayingCard("Queen", "Diamonds", 12),
    PlayingCard("King", "Diamonds", 13),
    PlayingCard("Ace", "Diamonds", 14),
    PlayingCard("Two", "Clubs", 2),
    PlayingCard("Three", "Clubs", 3),
    PlayingCard("Four", "Clubs", 4),
    PlayingCard("Five", "Clubs", 5),
    PlayingCard("Six", "Clubs", 6),
    PlayingCard("Seven", "Clubs", 7),
    PlayingCard("Eight", "Clubs", 8),
    PlayingCard("Nine", "Clubs", 9),
    PlayingCard("Ten", "Clubs", 10),
    PlayingCard("Jack", "Clubs", 11),
    PlayingCard("Queen", "Clubs", 12),
    PlayingCard("King", "Clubs", 13),
    PlayingCard("Ace", "Clubs", 14)
};

int myRandomFunction() {
    srand((int)time(0));
    int r = (rand() % 52);
    return r;
}