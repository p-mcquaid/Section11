#include <iostream>

using namespace std;
int num{300}; // Global variable - declared outside any scope
              // could be used anywhere in the program

void local_example();
void global_example();
void static_local_example();

void global_example(int x)
{
    cout << "Global num is: " << num << endl;
    num *= x;
    cout << "Num is now: " << num << endl;
}

void local_example(int x)
{
    int num{1000}; // local to local example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "\nLocal num is: " << num << " in local_example - end" << endl;
    // num1 is not within scope so it cannot be used outside of main
}

void static_local_example(int x)
{
    static int num{5000};
    cout << "Num before incrementation: " << num << endl;
    num += x;
    cout << "Num after incrementation: " << num << endl;
}
int main()
{

    int num{100};  // Scope contained in main
    int num1{500}; // dues to being declared in main {} brackets

    cout << "Local num is " << num << endl;

    {
        int num{200}; // scope contained into inner set of {}
        cout << "Local num is: " << num << " in the inner block of code" << endl;
        cout << "Inner block can still see out though: " << num1 << endl;
    }

    cout << "Local num is " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example(3);
    global_example(2);

    static_local_example(1000);
    static_local_example(500);
    static_local_example(10);

    return 0;
}