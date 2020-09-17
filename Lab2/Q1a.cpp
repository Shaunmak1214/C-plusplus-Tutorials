#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double kineticenergy (double, double);

int main (){

    double mass, velo, joules;

    cout << "Enter an object's mass and velocity as required...." << endl;
    cout << "\nMass in kilograms: ";
    cin >> mass;

    cout << "Velocity in meters per second: ";
    cin >> velo;

    joules = kineticenergy(mass, velo);

    cout << "The kinetic energy of this object is " << joules << " joules." << endl;

return 0;

}
double kineticenergy(double mass, double velo){

    double joules;
    joules = (mass*(velo*velo))/2;

return joules;
}