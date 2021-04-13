#include <iostream>
#include <string>

using namespace std;

int calculator(string userOpp, int a = 0, int b = 0) {
    int Result;
    if(userOpp == "+") {
        Result = a + b;
    }
    if(userOpp == "-") {
        Result = a - b;
    }
    if(userOpp == "*") {
        Result = a * b;
    }
    if(userOpp == "/")
    {
        Result = a / b;
    }
    cout << Result << endl;
    return 0;
}


int main(int argc, char const *argv[])
{
    string Opperand;
    int FirstNumber = 0;
    int SecondNumber = 0;

    cout << "Please enter an Opperand: ";
    cin >> Opperand;
    cout << "\nNow please enter the first Number: ";
    cin >> FirstNumber;
    cout << "\nNow please enther the second Number: ";
    cin >> SecondNumber;

    calculator(Opperand, FirstNumber, SecondNumber);
    return 0;
}
