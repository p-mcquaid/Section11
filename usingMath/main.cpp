#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double num{};

    cout << "Enter a number: ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The celi of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;

    double power{};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " to the power of " << power << " is: " << pow(num,power) << endl;
    

    return 0;
}