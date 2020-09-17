#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float day1, day2, day3, total;

    cout << "Enter the sales for day 1 :";
    cin >> day1;

    cout << "Enter the sales for day 2: ";
    cin >> day2;

    total = day1 + day2;

    cout << "QTech Sdn Bhd Sales figures for 2 days";
    cout << "\nDay 1: " << day1;
    cout << "\nDay 2: " << day2;
    cout << "\nTotal: " << total;

    return 0;   

}