#include "tryout.hxx"
#include <iostream>
#include <string>
using namespace std;

PlayingCard::PlayingCard(std::string m_name, std::string m_color, int worth)  {
    // this = self in python
    this->m_name = m_name;
    this->m_color = m_color;
    this->worth = worth;
}

PlayingCard::~PlayingCard() {
}

void PlayingCard::getCardName() {
    cout << m_name << " of " << m_color << ": " << worth << endl;
}

int PlayingCard::getCardWorth() {
    return worth;
}
/*
function to convert worth into name -> Ace has worth 14
*/