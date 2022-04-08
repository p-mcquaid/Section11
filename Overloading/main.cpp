#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string a, string b)
{
    cout << "Printing two strings: " << a << " " << b << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector: " << endl;
    for (auto i : v)
    {
        cout << i + " ";
    }
    cout << endl;
}
int main()
{
    print(100);

    print('A');

    print(20.2);
    print(20.1F);//Float promoted to a double to be overloaded into function

    print("C style string");
    string s = {"C++ Style String"};//Either style string works
    print(s);

    print("C Style", s);
    vector<string> v = {"2","4","7","9"};
    print(v);

    return 0;
}