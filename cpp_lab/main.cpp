#include <iostream>
#include <fstream>
using namespace std;
/* 
to debug use g++ -g 
*/
void create_file() {
    ofstream file("notes.txt"); // create file in a target directory
}
// maybe use a vector reference to safe everything that was typed
void users_choice() {
    char choice[1];
    cout << "Hello, do you want to create a notes file? [y/n]" << endl;
    cin >> choice;
    if ((choice[0] == 'y') || (choice[0] == 'Y')) { 
        create_file();
        cout << "Notes were created." << endl;
    }
    else {
        cout << "Goodbye." << endl;
    }
}

int main(int argc, char const *argv[])
{
    users_choice();
    return 0;
}
