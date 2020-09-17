#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int num=0, total=0;

    while(num < 99){

        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        total = total + num;

    }

    total = total - 99;
    cout << "\n The total is : " << total;

    return 0;

}