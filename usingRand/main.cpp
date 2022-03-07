#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber{};
    size_t count{10}; // Number of random numbers
    int min{1};
    int max{6}; // upper and lower bounds inclusive

    // Seed the random number generator
    // Without seeding, the sequence of random numbers will
    // be the same each time

    cout << "RAND_MAX on my system is " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; i++)
    {
        randomNumber = rand() % max + min; // generates a random number bertween min and max
        cout << randomNumber << endl;
    }

    return 0;
}