#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &s);
void print_vector(const vector<string> &s);

void pass_by_ref1(int &num){
    cout << num << endl;
    num = 1000;
}

void pass_by_ref2(string &s){
    cout << s << endl;
    s = "Changed";
}

void pass_by_ref3(vector<string> &s){
    for (size_t i = 0; i < s.size(); i++)
    {
        s.at(i) = "/";
    }
    
}

void print_vector(const vector<string> &s){
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    
}


int main(){
    int number_test{1};
    string test{"BlaBla"};
    vector<string> v = {"lots", "of", "Words"};

    pass_by_ref1(number_test);
    cout << number_test << endl;

    pass_by_ref2(test);
    cout << test << endl;

    print_vector(v);
    pass_by_ref3(v);
    print_vector(v);
    

    return 0;
}