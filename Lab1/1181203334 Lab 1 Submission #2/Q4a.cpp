#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;
double area(double radius); 
      
int main( ){

    double radius, area_of_circle, volume_of_sphere;

    cout << "Enter a radius of a circle :";
    cin >> radius;

    area_of_circle = area(radius);

    cout << "Radius = " << radius << " inches\n" << endl;
    cout << "Area of circle = " << area_of_circle << " square inches\n";
    return 0;
}

double area(double radius){

    double area;

    area = 2 * PI * radius;

    return area;

}

