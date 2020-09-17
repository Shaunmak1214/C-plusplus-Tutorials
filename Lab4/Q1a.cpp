#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>

using namespace std;


class fraction{

    int denom, nume;

    public:
    void setdata(int first, int second){

        nume = first;
        denom = second;

    }

    int getdenom(){

        return denom;

    }

    int getnume(){

        return nume;

    }

};

int isvalid(fraction ob){

    int valid;
    
        if(ob.getdenom() == 0){

            valid = 0;
            cout << "\nAlert:Denominator is having value zero " << endl;

        }else if(ob.getnume() > ob.getdenom()){

            valid = 0;
            cout << "\nAlert:Numerator greater than denominator" << endl;

        }else{

            valid = 1;
            return valid;

        }


}

int main(){

    fraction ob1[3];
    int valid;

        for(int i=0; i<3; i++){
            ob1[i].setdata(i+1,2-i);
            cout << "Fraction" << i+1 << "/" << 2-i ;
            valid = isvalid(ob1[i]);

            if(valid == 0){

                cout << "is INvalid" << endl;

            }else if(valid == 1){

                cout << "is valid" << endl;

            }

        }
    return 0;
}