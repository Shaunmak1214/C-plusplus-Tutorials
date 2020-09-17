#include <iostream>
#include <iomanip>
#include <string>

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
        cout << "Product Price     :RM " << price << endl;
        cout << "Total Payment     :RM " << total << endl;

    }


};

int main(){

    purchase p;

    string name;
    string code;
    double quantity, price;

    cout << "===================" << endl;
    cout << "      WELCOME      " << endl;
    cout << "===================" << endl;

    cout << "Enter name       : ";
    getline(cin, name);
    cout << "\nProduct Code   :";
    getline(cin, code);
    cout << "\nEnter Quantity :";
    cin >> quantity;
    cout << "\nEnter price      :";
    cin >> price;

    p.setdata(name, code, quantity, price);
    p.calculate();
    p.print();

    return 0;

}