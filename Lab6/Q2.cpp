#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Books {
	
	private:
		string isbnNo, title, author;
		float price, discounted_price, discount_perc;
		
	public:
		void setData();
		void calcDiscountedPrice();
		void print();
		float getDiscountedPrice();
		~Books();
};

void func(Books &);

int main() {
	
	Books B1;
	
	Books B2[5];
	float max=0, price[5];
	int total=0;
	
	cout<<"Enter data for new incoming book this Month......\n\n"<<endl;
	func(B1);
	cin.ignore();
	
	cout<<endl<<endl<<"Now we shall enter and display data for 5 special boooks....\n\n"<<endl;
	
	for(int x=0; x<5; x++) {
		func(B2[x]);
		
		if(price[x]>max) {
			max = price[x];
		}
		
		if(B2[x].getDiscountedPrice()<30) {
			total += 1;
		}
	}
	
	cout<<endl<< "--------------------------------------------------------\n"<<endl;
   	cout<<"The most expensive book is RM "<<setprecision(2)<<fixed<<max<<endl;
   	cout<<"The number of books that are below RM 30 are :"<<total<<endl<<endl;
   	
   	return 0;
	
}

void func(Books &bookobj) {
	
	bookobj.setData();
	bookobj.calcDiscountedPrice();
	bookobj.print();
}

void Books::setData() {
	
	cout<<"Enter ISBN               : ";
    cin>>isbnNo;
    cout<<"Enter Title              : ";
    
	cin.ignore();
	
    getline(cin, title);
    cout<<"Enter Author's name      : ";
    getline(cin, author);
    cout<<"Enter price              : RM ";
    cin>>price;
    cout<<"Enter discount (%)       : ";
    cin>>discount_perc;
    cout<<endl;

}

void Books::calcDiscountedPrice() {
	
	discounted_price = price * (100 - discount_perc) / 100;
}

void Books::print() {
	
	cout<<"--------------------------------------------------\n"<<endl;
	cout<<"	        Book Details						"<<endl;
	cout<<"--------------------------------------------------\n"<<endl;
	cout<<"ISBN : "<<isbnNo<<endl;
	cout<<"Title : "<<title<<endl;
	cout<<"Author : "<<author<<endl;
	cout<<"Original Price : "<<setprecision(2)<<fixed<<price<<endl;
	cout<<"Discounted Price : "<<setprecision(2)<<fixed<<discounted_price<<endl<<endl;	
}

float Books::getDiscountedPrice() {
	
	return discounted_price;
}

Books::~Books() {
	
	cout<<"--------------Thank you--------------"<<endl;
}


