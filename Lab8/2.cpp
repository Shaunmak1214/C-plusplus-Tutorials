//Note to Mr Goh Chien LI 
//For this question i decided to move all contents inside function into the class

#include<iostream>
#include<string>
using namespace std;

class Ticket{

    private: 

    int no;
    float price;

    public:

    //constructor
    Ticket(){

        price = 10.00;

    }

    void setTickets(){

        cout << "Please enter number of tickets to purchase: ";
        cin >> no;

    }

    friend class Student;

};

class Student{  

    private: 

    string id, name, purchase;
    Ticket p;

    public: 

    void setStudent(){

        cout << "\nEnter ID         : ";
		cin >> id;

		cout << "Enter Name       : ";
		cin >> name;

    }

    void ticketEntry(){

        cout << "Do you want to purchase charity tickets? [Enter Y or N]:";
		cin >> purchase;
			
		if(purchase=="Y"){
			purchase = "Yes";
			p.setTickets();
		}
		else if(purchase=="N"){

			purchase = "No";
			cout << "--------No tickets purchase--------" << endl;
		}

    }

    void display(){

        float total;

		cout << "\n--------------------------------" << endl;
		cout << "         STUDENT  DETAILS       " << endl;
		cout << "--------------------------------" << endl;
		cout << "ID               : " << id << endl;
		cout << "Name             : " << name << endl << endl;
		cout << "--------------------------------" << endl;
		cout << "       ADDITIONAL  DETAILS      " << endl;
		cout << "--------------------------------" << endl;

		if(purchase=="Yes"){

			cout << "You've purchase " << p.no << " Tickets" << endl;

			total = p.price * p.no;

			cout << "Total amount  : RM " << total << endl;

		}else if(purchase=="No"){

			cout << "You've not purchased any tickets" << endl;
		}

    }

};

int main(){

   Student stud[3];

   for(int i = 0; i < 3; i++)
   {
      stud[i].setStudent();
      stud[i].ticketEntry();
      stud[i].display();
   }

   return 0;

}