#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Staff {

    protected:
    string name, id;
    int age;
    float salary, nett_salary;

    public:
    void setdata() {

        cout << "Enter Name    :";
        cin.ignore();
        getline(cin, name);

        cout << "Enter ID      :";
        getline(cin, id);

        cout << "Enter Age     :";
        cin >> age;

        cout << "Enter Salary  :RM";
        cin >> salary;

    }

    //getter function
    float getNett_salary() {

        return nett_salary;

    }

};

class Executive : public Staff {

    private:
    int OT_hrs;
    float rate;

    public:

    void setExecutive() {

        cout << "Enter OT hrs  :";
        cin >> OT_hrs;

        cout << "Enter Rate    :RM";
        cin >> rate;

    }

    void cal_salary_exec() {

        nett_salary = salary + (OT_hrs * rate);

    }

    void display() {

        cout << "\n\nName        :" << name << endl;
        cout << "ID          :" << id << endl;
        cout << "Age         :" << age << endl;
        cout << "Salary      :RM" << salary << endl;
        cout << "OT Hours    :" << OT_hrs << endl;
        cout << "OT Rate     :" << rate << endl;
        cout << "Nett Salary :RM" << nett_salary << endl;
 
    }

};

class Salesperson : public Staff {

    private:
    int units;
    float bonus;

    public:
    void setSalesperson() {

        cout << "Enter Units    :";
        cin >> units;
    
    }

    void cal_salary_sales() {

        if(units <= 500) {

            bonus = 250;

        }else if(units > 500) {

            bonus = 500;

        }

        nett_salary = salary + bonus;
            
    }

    void display() {

        cout << "Name        :" << name << endl;
        cout << "ID          :" << id << endl;
        cout << "Age         :" << age << endl;
        cout << "Salary      : RM" << salary << endl;
        cout << "OT Hours    :" << units << endl;
        cout << "OT Rate     :" << bonus << endl;
        cout << "Nett Salary : RM" << nett_salary << endl;

    }

};

int main() {

    int choice, count=0, totalcount=0;
    char cont;
    double total=0, salary;

    Staff s;

    cout << "Do you want to continue ?";
    cin >> cont;

    while(cont == 'Y') {

        cout << "Enter [1] for Executive    OR    [2] for Salesperson : ";
        cin.ignore();
        cin >> choice;

        if (choice == 1) {

            Executive e;
            e.setdata();
            e.setExecutive();
            e.cal_salary_exec();
            e.display();
            salary = e.getNett_salary();

        }else if (choice == 2) {

            Salesperson s;
            s.setdata();
            s.setSalesperson();
            s.cal_salary_sales();
            s.display();

            salary = s.getNett_salary();

        }else {

            cout << "INVALID ENTRY..." << endl;

        }

        totalcount++;
        total += salary;

            
        cout << "Do you want to continue ?";
        cin >> cont;

    }

    cout << "Total staff:" << totalcount << endl;
    cout << "Total Payouts is RM " << total;

    return 0;

}
