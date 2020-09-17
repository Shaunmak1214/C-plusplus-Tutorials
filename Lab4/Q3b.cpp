#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Strawberry{

    string selection;
    double price;
    int choice;

    public:
    void dispStrawberrySelection(){
        cout << "[1] Strawberry & Nutella Crepe      	Price:  RM10.00" << endl;
        cout << "[2] Strawberry & Chocolate Crepe    	Price:  RM12.00" << endl;
        cout << "[3] Strawberry Waffle with Custard   	Price:  RM13.40" << endl;
        cout << "[4] Strawberry Smoothie              	Price:  RM10.00" << endl;
        cout << "[5] Strawberry & Country Cream       	Price:  RM13.00" << endl;
    }

    void purchase(){
        cout << "Enter your choice based on the number" << endl;
        cin >> choice;
    }

    double getPrice(){
        switch(choice){

            case 1:
                price = 10.00;
                break;
            
            case 2:
                price = 12.00;
                break;
            
            case 3:
                price = 13.40;
                break;
            
            case 4:
                price = 10.00;
                break;
            
            case 5:
                price = 13.00;
                break;
            
            default:
                price = 0;
            
        }
        return price;
    }

    string getSelection(){
        switch(choice){

            case 1:
                selection.assign("Strawberry & Nutella Crepe");
                break;
            
            case 2:
                selection.assign("Strawberry & Chocolate Crepe");
                break;
            
            case 3:
                selection.assign("Strawberry Waffle with Custard");
                break;
            
            case 4:
                selection.assign("Strawberry Smoothie");
                break;
            
            case 5:
                selection.assign("Strawberry & Country Cream");
                break;
            
            default:
                selection.assign("You didn't select anything sir!");
            }

            //cout << selection << endl;

            return selection;
        
    }
};
class Customer{

    string StrawSelect;
    string name;
    double payment;
    Strawberry st;

    public:
    void setData(){
        cout << "+++++++++++++++++++++++++++++++" << endl;
        cout << "   Tutti Frutti Strawberry     " << endl;
        cout << "+++++++++++++++++++++++++++++++" << endl;
        cout << "Your name           :";
        getline(cin, name);

        getOrder();
    }

    void getOrder(){
        st.dispStrawberrySelection();
        st.purchase();

        payment = st.getPrice();
        StrawSelect = st.getSelection();
    }

    void dispDetails(){
        cout << "- - - - - - - - - - - - - - - - -" << endl;
        cout << name << ", Your purchase details" << endl;
        cout << "- - - - - - - - - - - - - - - - -" << endl;
        cout << "Selection              : " << StrawSelect << endl;
        cout << "Payment to be made     : RM" << setprecision(2) << fixed << payment << endl;
    }

};

int main(){

    Customer cust;

    cust.setData();
    cust.dispDetails();

}