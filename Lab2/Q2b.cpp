#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

double cal(double marks[], int size);
string greds(double);


int main(){

    double marks[5];
    int i;
    string name;
    double average;
    string gred;

        cout << "Enter Name : ";
        getline(cin, name);

            for(i=0;i<5;i++){

                cout << "Enter Marks : ";
                cin >> marks[i];

            }

        average = cal(marks, 5);

        gred = greds(average);

    cout << "Name    : " << name << endl;
    cout << "Average : " << average << endl;
    cout << "Grade   : " << gred << endl;

    return 0;

}

double cal(double marks[], int size){

    int i;
    double total, average;

        for(i=0;i<size;i++){

            total = total + marks[i];

        }
    cout << "Total : " << total << endl;
    average = total/size;

    return average;

}

string greds(double average){

    string greds;

        if(average >= 80){

            greds = "A";

        }else if(average >= 60){

            greds = "B";

        }else if(average >= 50){

            greds = "C";

        }else{

            greds = "F";

        }

    return greds;

}
