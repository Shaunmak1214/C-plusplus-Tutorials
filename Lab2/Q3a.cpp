#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

struct Student{

    char name[30], gred;
    double marks[5], average;

};

double cal(double marks[]);
char greds(double avg);

int main(){

    Student studentdetail;
    int i;

        cout << "Enter Name : ";
        cin.get(studentdetail.name, 30);

            for(i=0;i<5;i++){

                cout << "Enter Marks : ";
                cin >> studentdetail.marks[i];

            }

        studentdetail.average = cal(studentdetail.marks);

        studentdetail.gred = greds(studentdetail.average);

    cout << "Name    : " << studentdetail.name << endl;
    cout << "Average : " << studentdetail.average << endl;
    cout << "Grade   : " << studentdetail.gred << endl;

    return 0;

}

double cal(double marks[]){

    int i;
    double total, average;

        for(i=0;i<5;i++){

            total = total + marks[i];

        }
    cout << "Total :" << total << endl;
    average = total/5;

    return average;

}

char greds(double avg){

    char greds;

        if(avg >= 80){

            greds = 'A';

        }else if(avg >= 60){

            greds = 'B';

        }else if(avg >= 50){

            greds = 'C';

        }else{

            greds = 'F';

        }

    return greds;

}
