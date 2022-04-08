#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size)
{
    for (size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void set_array(int arr[], size_t size, int value)
{
    for (size_t i{0}; i < size; i++)
        arr[i] = value;
}

int main()
{
    int numbers[]{100,200,300,400,500};

    
    print_array(numbers,5);
    set_array(numbers,5,100);
    print_array(numbers,5);
    return 0;
}
