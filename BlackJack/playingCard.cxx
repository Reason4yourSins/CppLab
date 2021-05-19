#include "playingCard.hxx"
#include <iostream>
#include <string>
using namespace std;

PlayingCard::PlayingCard(std::string m_name, std::string m_color, int worth)  {
    // this => self in python
    this->m_name = m_name;
    this->m_color = m_color;
    this->worth = worth;
}

PlayingCard::~PlayingCard() {};

int PlayingCard::getCardWorth() {
    return worth;
}
// __string__ in python
std::ostream& operator<< ( std::ostream& os, const PlayingCard& c ) {
   os << c.m_name << " of " << c.m_color << ": " << c.worth << endl;
   return os;
}

/*
same as above
void PlayingCard::showCardName() {
    cout << m_name << " of " << m_color << ": " << worth << endl;
}
*/