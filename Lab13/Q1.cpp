#include<iostream>
#include<iomanip>

using namespace std;

class Rice {
    
    private:
    double pricePerKg, totalWeight;

    public:
    Rice(double w) {

        pricePerKg = 10.0;
        totalWeight = w;

    }

    void displayRice() {

        cout << "----------------------------------------" << endl;
        cout << "         Rice Details                 " << endl;
        cout << fixed << setprecision(2);
        cout << "Total weight      : " << totalWeight << endl;
        cout << "Price perkg (RM)  : " << pricePerKg << endl;
        cout << "Total (RM)        : " << totalWeight * pricePerKg << endl;

    }

};

class Product {

    private:
    float kg;

    public:
    Rice operator + (const Product &p) {

        return Rice(kg + p.kg);

    }

    void setData() {

        cout << "Enter product's kg :" << endl;
        cin >> kg ;

    }

};

int main() {

    Product a, b;
    a.setData();
    b.setData();

    Rice r = a + b;
    r.displayRice();

}