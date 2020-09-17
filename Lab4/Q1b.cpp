#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;


class CarProduction{   

    int quantity;
    string plantno;


    public:

    void setdata(string s, int q){ 

        plantno = s;
    	quantity = q; 

    }
    
    void display_graph(){

        int hashamount, dialamount;

        hashamount = quantity % 2;
        dialamount = (quantity - hashamount)/2;

        //cout << hashamount << dialamount << endl;

        cout << "======================================" << endl;
        cout << "   " << plantno << endl;
            for(int j=0;j<dialamount;j++){

                cout << "*";

            }
            for(int i=0;i<hashamount;i++){

                cout << "#";

            } 
        cout << endl;
    }
};
int main(){
    
    CarProduction C[4];

    string s; int qty;

    for(int i=0; i<4; i++){
        cout<<"Enter the plant no#                     : "; 
        cin>>s;
        cout<<"Enter the amount of cars produced today : "; 
        cin>>qty;
        C[i].setdata(s, qty);
    }

    cout<<"\n       Daily Productivity Report       "<<endl;

    for(int i=0; i<4; i++){
        C[i].display_graph();
    }
}  

