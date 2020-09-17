#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#define size 8

using namespace std;

class stationery_inventory{

    private:
    string code;
    int warehouses[size];
    
    public:
    void setdata(int* ptr){

        cout << "Enter Stationery Code: ";
        getline(cin, code);
        cout << "-----------------------------------" << endl;
        cout << "         The Inventory Info        " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Stationery code : " << code << endl;

            for(int j=0; j<size; j++){

                warehouses[j] = *ptr++;
                //++ptr; //increment of pointer

            }

    }

    void display_reverse(){

        int count = 1;

            for(int i=7; i>=0 ;i--){

            cout << "Warehouse " << count << ": " << warehouses[i] << endl;

            count++;

        }
    }

    void process(){

        int count = 1;

        cout << "-----------------------------------" << endl;
        cout << "    Colourful Book Holder Stock    " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Enter the stocks for 8 warehouses: " << endl;

            for(int i=0;i<size;i++){

                cin >> warehouses[i];

            }

        fflush(stdin);

        cout << "###################################" << endl;
        cout << "             Item Entry            " << endl;
        cout << "-----------------------------------" << endl; 

        cout << "Enter Stationery Code: ";
        getline(cin, code);
        cout << "-----------------------------------" << endl;
        cout << "         The Inventory Info        " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Stationery code : " << code << endl;


            for(int i=7; i>=0 ;i--){

            cout << "Warehouse " << count << ": " << warehouses[i] << endl;

            count++;

            }
    }

};

int main(){

    stationery_inventory hold;

    int warehouses[size] = {5, 10, 15, 22, 20, 25, 30, 35};

    cout << "       SMART Stationery Shop       " << endl;
    cout << "###################################" << endl;
    cout << "             Item Entry            " << endl;
    cout << "-----------------------------------" << endl; 

    hold.setdata(warehouses);
    hold.display_reverse();
    hold.process();

}
