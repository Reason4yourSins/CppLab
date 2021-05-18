#ifndef PLAYINGCARD
#define PLAYINGCARD
#include <string>

class PlayingCard {
// start with the attributes and their types -> concludes the methods
    private:
        // what the object consists of. Cards have a weight too, but I dont need that.
        std::string m_name;
        std::string m_color;
        int worth = 0;
        friend std::ostream& operator<< ( std::ostream& os, const PlayingCard& c );
        // friends are allowed to see private stuff
    public:
        PlayingCard(std::string m_name, std::string m_color, int worth);
        ~PlayingCard();
        int getCardWorth();
        // methods are what you can do with the object
};
#endif