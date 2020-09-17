#include<iostream>
#include<iomanip>
using namespace std;

class ICECREAM{

	string flavour;
	int number;
	float price;

	public:
	void menu();
	void setflavour();
	void setHowMany();
	friend void display_receipt(ICECREAM);
	ICECREAM();
};

int main(){

	ICECREAM IC;
	string flavour;
	float price;

	IC.menu();
	IC.setflavour();
	IC.setHowMany();
	display_receipt(IC);

	return 0;

}

void ICECREAM::menu(){

	cout << "=================================" <<endl;
  	cout << "    ===  CHOOSE FLAVOUR  ===" <<endl;
  	cout << "=================================" <<endl;
  	cout << "[1] === Strawberry Flavour RM 3.50" <<endl;
  	cout << "[2] === Chocolate Flavour  RM 2.50" <<endl;
  	cout << "[3] === Vanilla Flavour    RM 1.50" <<endl;
  	cout << "[4] === Durian Flavour     RM 0.50" <<endl;

}

void ICECREAM::setflavour(){

	int choice;
  
  	cout << "\nChoice of flavour : ";
  	cin >> choice;
  
  	switch(choice) {
  		case 1: price = 3.50;
  				flavour.assign("Strawberry Flavour");
  				break;
		case 2: price = 2.50;
				flavour.assign("Chocolate Flavour");
				break;
		case 3: price = 1.50;
				flavour.assign("Vanilla Flavour");
				break;
		case 4: price = 0.50;
				flavour.assign("Durian Flavour");
				break;
		default: price = 0.00;
				break;
  }
}

void ICECREAM::setHowMany(){

	cout << "How many : ";
	cin >> number;

}

ICECREAM::ICECREAM(){

	cout << "Barney's House of Ice" << endl;

}

void display_receipt(ICECREAM dis){

	float total;

	total = dis.price * dis.number;

	cout << "\n=================================" << endl;
  	cout << "      ===  PAYMENT  ===" << endl;
  	cout << "=================================" << endl;
  	cout << "Flavour	  : " << dis.flavour << endl;
  	cout << "Total Price  : " << setprecision(2) << fixed << total << endl;

}