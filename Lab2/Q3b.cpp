#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct rental{

    char name[20];
    double rent;
    int month;

};

double report(struct rental[]);

int main(){

    double total;

    struct rental customer[3] = {{"Ali", 300, 4}, {"Johnson", 250, 1}, {"David", 790, 2}};

    total = report(customer);

    cout << "Total rental to be collected : $" << total;

    return 0;

}

double report(struct rental *customer){

    int i,x;
    double amountdue[3]; 
	double totalamount;

    cout << "---------------------------------------------------" << endl;
    cout << "-            AMOUNT DUE MORE THAN $1000.00        -" << endl;
    cout << "---------------------------------------------------" << endl;

        for(i=0;i<3;i++){
        	
        	totalamount = 0;

            amountdue[i] = customer->rent * customer->month ;

				cout << amountdue[i];

                if(amountdue[i] > 1000){

                    totalamount = totalamount + amountdue[i];

                    cout << "Tenant name    : " << customer->name << endl;
                    cout << "Monthly rental: $" << customer->rent << endl;
			        cout << "Unpaid months: " << customer->month << endl;
			        cout << "Unpaid amount: $" << amountdue[i] << endl;

                }else{

                    totalamount = totalamount + 0;
                    
                }
                customer++;
        }
        
        cout << totalamount << endl;

    return totalamount;

}
