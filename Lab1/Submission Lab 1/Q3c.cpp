#include <iostream>
#include <iomanip>

using namespace std;

int main(){    

    const int loop = 5;
	int index;
	int hours[loop];         
	double payRate[loop];
	double grossPay;

	// Get employee work data
	cout << "Enter the hours worked and hourly pay rates of "
		 << loop << " employees. \n";  

        for (index = 0; index < loop; index++)
        {  cout << "Hours worked by employee #" << (index + 1) << ": ";
            cin  >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
            cin  >> payRate[index];
        }

    cout << "\n\nHere is the gross pay for each employee:" << endl;

        for (index = 0; index < loop; index++){

            grossPay = hours[index] * payRate[index];

            cout << "Employee #" << index+1 << ": RM" << fixed << setprecision(2) << grossPay << endl;

        }
	
	return 0;
}
