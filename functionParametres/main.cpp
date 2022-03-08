#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}

int main()
{
    int num{10};
    int another_num{20};
    cout << "num before calling pass_by_value: " << num << endl;
    pass_by_value(num);
    cout << "num after calling pass_by_number: " << num << endl;

    cout << "\nanother num before calling pass_by_value: " << another_num << endl;
    pass_by_value(another_num);
    cout << "num after calling pass_by_number: " << another_num << endl;

    string name{"Paul"};
    cout << "\nname before calling pass_by_2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_number2: " << name << endl;

    vector<string> v{"paul", "sean", "lucy"};
    cout << "\nVector v before calling pass_by_3: " << endl;
    print_vector(v);
    pass_by_value3(v);
    cout << "Vector v after clearing vector in pass_by_3: " << endl;
    print_vector(v);

    return 0;
}