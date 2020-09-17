#include <iostream>
#include <iomanip>

using namespace std;

class increment{

    char name[20];
    float SC_point;
    char rating;

    public:

    char* set_name(){

        cout << "Enter Name : ";
        cin.get(name, 20);

        return name;

    }

    float set_SC_Point(){

        cout <<"\nScore Point : ";
        cin >> SC_point;

        return SC_point;

    }

    char set_rating(){

        if(SC_point >= 3.00 && SC_point <= 4.00){

            rating = 'A';

        }else if(SC_point >= 2.00 && SC_point <= 2.99){

            rating = 'B';

        }else{

            rating = 'F';

        }

        return rating;

    }

};

int main(){

    increment M;
    string name;
    float point;
    char rating;

    cout << "=========================" << endl;
    cout << "    AGENT INFORMATION    " << endl;
    cout << "=========================" << endl;

    name = M.set_name();
    point = M.set_SC_Point();
    rating = M.set_rating();

    cout << "=========================" << endl;
    cout << "      INCREMENT SLIP     " << endl;
    cout << "=========================" << endl;

    cout << "Name           : " << name << endl;
    cout << "Point Awarded  : " << point << endl;
    cout << "Rating         : " << rating << endl;


}