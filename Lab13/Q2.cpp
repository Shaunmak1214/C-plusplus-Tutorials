#include<iostream>
using namespace std;

class Produce {

    private:
    double price, total;
    int qty;

    public:
    Produce(): price(0.0), total(0.0), qty(0){}

    void setInput(double pr, int qt) {

        total = pr * qt;

    }

    double getTotal() {

        return total;

    }

    friend class Bill;

};

class Bill {

    private:
    double grandTotal;
    
    public:
    Bill(): grandTotal(0) {}

    void display() {

        cout << "grandTotal :" << grandTotal << endl;

    }

    Bill& operator+= (const Produce &pt) {

        grandTotal = grandTotal + pt.total;

    }

};

int main() {

    char cont;
    double pr;
    int qt;
    
    Produce pd;
    Bill bl;

    do {
        cout << endl << "Enter price    : RM ";
        cin  >> pr;
        cout << "Enter quantity : ";
        cin  >> qt;
        pd.setInput( pr, qt );
        cout << "Sub total      : RM " << pd.getTotal() << endl;

        bl += pd; 

        cout << endl << endl << "Continue (y/n)? ";
        cin >> cont;

    } while( cont == 'y' );

    bl.display();
    cout << endl;

    return 0;

}