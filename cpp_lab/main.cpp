#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

void changeToNewDirectory();

void create_file() {
    /*
    TODO: fix directory change
          it saves the location of the old, aswell as the new directory, but never changes them

    TODO: write a standalone function to change directorys and just call the create_file()
          when the directorys have changed
          
    OR:   write two new functions, one to change to the new directory, then create_file(), 
          then call the third function to return to the old directory
    */

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
