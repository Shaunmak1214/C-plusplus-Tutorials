#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>

using namespace std;

#define CharA 65
#define CharB 66
#define CharC 67

class TravelPackage{

    public:
    char package;
    int noadult, nochild;
    double adultprice, childprice, discount, totalprice;

};

int main(){

    int count = 0;

    TravelPackage user;

    user.package=0;
    user.totalprice=0;

    //cout << "Char : " << endl;
    //cin >> user.package;
    //cout << "Output: " << user.package << endl;

        do{

            if(count >= 1){

                cout << "Invalid Selection." << endl;
                
            }

            cout << "Select travel package < A, B, C > : ";
            cin >> user.package;
            user.package = toupper(user.package);
            // cout << user.package << endl; //debug purpose

            count++;

        }while(!(user.package>=CharA && user.package<=CharC)); //CharA=65 (ASCII) check if inmput is between A annd C

        switch (user.package){
        case 'A' : user.adultprice = 1000.00; 
                   user.childprice = 500.00;
        break;

        case 'B' : user.adultprice = 800.00; 
                   user.childprice = 600.00;
        break;

        case 'C' : user.adultprice = 500.00; 
                   user.childprice = 300.00;
        break;
        
        default:
            break;
        }

    cout << "Enter no of adult : ";
    cin >> user.noadult;
    cout << "Enter no of children : ";
    cin >> user.nochild;

    user.totalprice = (user.noadult * user.adultprice) + (user.nochild * user.childprice);

    if(user.totalprice > 3000){

        user.totalprice = (user.totalprice * 80) /100;

    }
    cout << "Total price :  RM" << user.totalprice << endl;
    
    return 0;

}
