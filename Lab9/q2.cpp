#include<iostream>
#include<iomanip>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class ChoreographyMarks{

    private: 

    float points, total;

    public: 

    ChoreographyMarks (){

        total = 30;

    }

    void setCgPoints(){

		cout << "Enter Choreography Marks [max:30] : ";
		cin >> points;

    } 

    friend class Dancer;
}; 

class InventiveMarks{

    private: 

    float points,total;

    public:

    InventiveMarks(){
        total = 20;
    }

    void SetInvPoints(){

		cout << "Enter Inventive Marks [max:20]    : ";
		cin >> points;

    }

    friend class Dancer;

};

class Dancer{

    private: 

    string name; 
    int age; 
    float finalpoints=0, cpoints=0, ipoints=0; 

    public: 

    void set_details(){

        cout << "\n:::::Details for Dancer:::::" << endl;
		cout << "Enter name                        : ";
        cin.ignore();
		getline(cin, name);

		cout << "Enter age                         : ";
		cin >> age;

        cin.ignore();
    }

    void calcFinalPoints(ChoreographyMarks CM ,InventiveMarks IM){

		cpoints = (CM.points/CM.total)*100;
		ipoints = (IM.points/IM.total)*100;
		finalpoints = (CM.points + IM.points)/(CM.total + IM.total)*100;

    }

    int getAge(){

        return age;

    }

    string getName(){

        return name;

    }

	void displayScoreDetails(){

		cout << "\n:::::Score Board:::::" << endl;
		cout << "Choreography     : " << cpoints << endl;
		cout << "Inventive        : " << ipoints << endl;
		cout << "Final score      : " << finalpoints << endl;
		cout << "==============================================" << endl;

    }
    
};

int main(){

    int num;

    cout << "Enter number of dancers" << endl;
    cin >> num;
    cout << endl;

    cin.ignore();


    ChoreographyMarks cm;
    InventiveMarks im;

    Dancer *p;
    p = new Dancer[num];

        for(int i=0; i<num; i++){

            p[i].set_details();

            cm.setCgPoints();
            im.SetInvPoints();

            p->calcFinalPoints(cm, im);

            cout << "-----------------------------------------" << endl;
            cout << "=========================================" << endl;
            cout << "Dancer #" << i+1 << endl;
            cout << "=========================================" << endl;
            cout << "Name\t= " << p[i].getName() << endl;
            cout << "Age\t= " << p[i].getAge();

            p->displayScoreDetails();
            cout << "=========================================" << endl;
            cout << "-----------------------------------------" << endl;
            cout << endl;
        }

    delete[] p;

    return 0;
}
