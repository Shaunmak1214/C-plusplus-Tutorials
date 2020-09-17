#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double kineticenergy(double &ptr1, double &ptr2, double &ptr3);

int main (){

    double mass, velo, joules;
    //double* ptr1 = &mass;
    //double* ptr2 = &velo;

    cout << "Enter an object's mass and velocity as required...." << endl;
    cout << "\nMass in kilograms: ";
    cin >> mass;

    cout << "Velocity in meters per second: ";
    cin >> velo;

    joules = kineticenergy(mass, velo, joules);

    cout << "The kinetic energy of this object is " << joules << " joules." << endl;

return 0;
}

double kineticenergy(double &ptr1, double &ptr2, double &ptr3){

    double joules, mass, velo;
    mass = ptr1;
    velo = ptr2;
    joules = ptr3;
    joules = (mass*(velo*velo))/2;

return joules;
}