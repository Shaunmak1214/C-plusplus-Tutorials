#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Staff {

    private:
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

    friend class Executive;
    friend class Salesperson;

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

        setdata();
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

   int choice;

   cout << "Enter [1] for Executive    OR    [2] for Salesperson : ";
   cin >> choice;

   if (choice == 1)
   {
      Executive e;
      e.setdata();
      e.setExecutive();
      e.cal_salary_exec();
      e.display();
   }
   else if (choice == 2)
   {
      Salesperson s;
      s.setdata();
      s.setSalesperson();
      s.cal_salary_sales();
      s.display();
   }
   else
   {
      cout << "INVALID ENTRY..." << endl;
   }

   return 0;

}