// For.cbp
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

    // loop ten times
    for (int i=0; i < 10; ++i)
    {
        cout << GenerateRandomNumber(0, 100) << " ";
	}
	cout << "\n";

    return 0;
}
// practicing 'for' loop - i am very bad at using void and struct..
// practicing random number generation using for loop
//first time watching 'static' and static const double

//also first time 'srand', so I did not understand 'static_cast', 'srand', and a lot of other cases 
//I did not understadn this code, I need to revise