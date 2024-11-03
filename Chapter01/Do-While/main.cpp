// Do-While.cbp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerateRandomNumber(int min, int max)
{
    // static used for efficiency,
    // so we only calculate this value once
    static const double fraction =
        1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    // evenly distribute the random number
    // across our range
    return min + static_cast<int>(
        (max - min + 1) * (rand() * fraction));
}

int main()
{
    // set initial seed value to system clock
    srand(static_cast<unsigned int>(time(0)));

    char userChar;

    int iMin = 1;
    int iMax = 100;
    int iGuess;

    // Menu display
    cout << "Choose a number between 1 to 100, ";
    cout << "and I'll guess your number." << endl;
    cout << "Press L and ENTER if my guessed number is lower than yours";
    cout << endl;
    cout << "Press G and ENTER if my guessed number is greater than yours";
    cout << endl;
    cout << "Press Y and ENTER if I've successfully guessed your number!";
    cout << endl << endl;

    // Run the DO-WHILE loop
    do
    {
        iGuess = GenerateRandomNumber(iMin, iMax);
        cout << "I guess your number is " << iGuess << endl;
        cout << "What do you think? ";
        cin >> userChar;
        if(userChar == 'L' || userChar == 'l')
            iMin = iGuess + 1;
        else if(userChar == 'G' || userChar == 'g')
            iMax = iGuess - 1;

    }
    while(userChar != 'Y' && userChar != 'y');

    // to comment out everything in VS Code al together press Windows: Ctrl + K + C. Mac: Command + K + C.

    // // Run the WHILE loop
    // while(userNumber != computerNumber)
    // {
    //     cout << userNumber << " is ";
    //     if(userNumber > computerNumber)
    //         cout << "greater";
    //     else
    //         cout << "lower";
    //     cout << " than computer's number" << endl;
    //     cout << "Choose another number: ";
    //     cin >> userNumber;
    // }

    cout << "Yeeaayy.. I've got your number." << endl;
    return 0;
}
// // practicing Do-While loop, which is pretty much same as While loop!

