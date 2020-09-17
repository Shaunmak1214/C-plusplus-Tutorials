#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class purchase{

    private:
    string name, code;
    int quantity;
    double price, total;

    public:
    setdata(string name1, string code1, double quantity1, double price1){
    
        name = name1;
        code = code1;
        quantity = quantity1;
        price = price1;
    
    }

    calculate(){

        total = quantity * price;

    }

    print(){

        cout << "===================" << endl;
        cout << "      RECEIPT      " << endl;
        cout << "===================" << endl;
        cout << "Name              :" << name << endl;
        cout << "Product Code      :" << code << endl;
        cout << "Quantity          :" << quantity << endl;
        cout << "Product Price     :" << price << endl;
        cout << "Total Payment     :" << total << endl;
    }


};

int main(){

    purchase p;

    string name;
    string code;
    double quantity, price;
    int count=0;
    char choice;

    cout << "You have another customer to purchase item? [Y/N]: ";
    cin >> choice;
    choice = toupper(choice);

    fflush(stdin);

    while(choice == 'Y'){

        if(count >= 1){
            cout << "You have another customer to purchase item? [Y/N]: ";
            cin >> choice;
            choice = toupper(choice);
        }

        if(choice == 'N'){

            exit(0);

        }


        cout << "===================" << endl;
        cout << "      WELCOME      " << endl;
        cout << "===================" << endl;

        fflush(stdin);

        cout << "Enter name       :";
        getline(cin, name);
        cout << "Product Code     :";
        getline(cin, code);
        cout << "Enter Quantity   :";
        cin >> quantity;
        cout << "Enter price      :";
        cin >> price;

        p.setdata(name, code, quantity, price);
        p.calculate();
        p.print();

        count++;

    }

    return 0;

}