#include <iostream>
#include <cmath>

using namespace std;

//Function Prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

const double pi{3.14159};
//Clone of the function declaration project but using function prototypes instead of declaring
//the functions in the order required to prevent them from causing a compiler issue.
int main()
{

    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{

    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The radius of the circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}


void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with a radius of " << radius
         << " and a height of " << height << " is: " << calc_volume_cylinder(radius, height)
         << endl;
}
