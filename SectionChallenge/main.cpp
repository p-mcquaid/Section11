#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void print_menu();
void print_numbers(const vector<int> &v);
void add_number(vector<int> &v);
void display_avg(const vector<int> &v);
void print_largest(const vector<int> &v);
void print_smallest(const vector<int> &v);
void clear_list(vector<int> &v);
void handle_find(const vector<int> &v);
bool find(const vector<int> &v, int num);
char get_selection();

int main()
{
    char userEntry{};
    vector<int> nums{1, 2, 3};
    print_menu();

    do
    {
        print_menu();
        userEntry = get_selection();
        if (userEntry == 'P')
        {
            print_numbers(nums);
        }
        else if (userEntry == 'A')
        {
            add_number(nums);
        }
        else if (userEntry == 'M')
        {
            display_avg(nums);
        }
        else if (userEntry == 'S')
        {
            print_smallest(nums);
        }
        else if (userEntry == 'L')
        {
            print_largest(nums);
        }
        else if (userEntry == 'F')
        {
            handle_find(nums);
        }

        else if (userEntry == 'C')
        {
            clear_list(nums);
        }

        else if (userEntry == 'Q')
        {
            cout << "Program terminated - Goodbye!" << endl;
        }

        else
        {
            cout << "Unknown selection. Please select an option from the list. " << endl;
        }

    } while (userEntry != 'Q' && userEntry != 'q');

    return 0;
}

void print_menu()
{
    cout << "-----------------" << endl;
    cout << "\nP: Print numbers " << endl;
    cout << "A: Add number " << endl;
    cout << "M: Display mean " << endl;
    cout << "S: Print smallest number " << endl;
    cout << "L: Print largest number " << endl;
    cout << "Q: Quit " << endl;
    cout << "F: Find number in List" << endl;
    cout << "C: Clear List " << endl;
    cout << "\nPlease enter your selection: ";
}

void print_numbers(const vector<int> &v)
{
    if (v.empty())
    {
        cout << "[] - The list is empty." << endl;
    }
    else
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void add_number(vector<int> &v)
{
    int num{0};
    cout << "Please enter the number you would like to enter into the list: ";
    cin >> num;
    v.push_back(num);
    cout << num << " has been added to the list." << endl;
}

void display_avg(const vector<int> &v)
{
    int total{0};
    double avg{0.0};

    if (v.empty())
        cout << "The list is empty - the average will be 0. " << endl;
    else
    {
        for (auto i : v)
        {
            total += i;
        }
        cout << "The average of the list is: " << total / v.size() << endl;
    }
}

void clear_list(vector<int> &v)
{
    v.clear();
    cout << "The list has been cleared." << endl;
}

void print_largest(const vector<int> &v)
{
    int largest_num{v.at(0)};
    for (int i{0}; i < v.size(); i++)
    {

        if (v.at(i) > largest_num)
        {
            largest_num = v.at(i);
        }
    }
    cout << "The largest number in the list is: " << largest_num << endl;
}

void print_smallest(const vector<int> &v)
{
    int smallest_num{v.at(0)};
    for (auto i : v)
    {
        if (i < smallest_num)
            smallest_num = i;
    }
    cout << "The smallest number in the list is: " << smallest_num << endl;
}

char get_selection()
{
    char selection{0};
    cin >> selection;
    return toupper(selection);
}

void handle_find(const vector<int> &v)
{
    int target{0};
    cout << "Enter the number to find in the list: ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found in the list." << endl;
    else
        cout << target << " was not found in the list" << endl;
}

bool find(const vector<int> &v, int num){

    for (auto i : v)
    {
        if (num == i)
            return true;
    }
    return false;
}