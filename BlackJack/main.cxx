#include <iostream>
#include <array>
#include <stdlib.h>
#include <ctime>
#include "cards.hxx"
#include "tryout.hxx"
using namespace std;

int main(int argc, const char** argv) {
    srand((int)time(NULL));
    drawCard();
    drawCard();
    drawCard();
    drawCard();
    return 0;
}
