#include <iostream>
using namespace std;
int main (){

    int subject,num;
    double totalPayment = 0, averagePayment;
    double *fees;

    cout << "How many subjects you have registered: ";
    cin >> subject;

    //allocating dynamic array
    fees = new double [subject];

        for(num=0; num<subject; num++){

            cout << "Class " << num + 1 << " fees charge: RM ";
            cin >> *(fees + num);
            totalPayment = totalPayment + *(fees + num);

        }

	cout << "\n===== SEPTEMBER 2016 PAYMENT DETAILS =====" << endl;
	cout << "Fees charges you have entered: ";

        for(num=0; num<subject; num++){

            cout << *(fees + num) << "(RM)... ";

        }

    averagePayment = totalPayment / subject;

    cout << "\nTotal payment to be made: RM " << totalPayment << endl;
	cout << "Minimum payment (Average of total payment): RM " << averagePayment;

    return 0;
    
}
