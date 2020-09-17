#include<iostream>
#include<iomanip>
using namespace std;

class Manisan
{
	private:
		float KacangHijau;
		float JagungDurian;
		float PulutHitam;
		float SantanMango;
		float Pudding;
		float Fruits;
		float price;
	public:
		void Bubur_Manisan(float kacangHijau, float jagungDurian, float pulutHitam, float santanMango, float pudding, float fruits){
			KacangHijau = kacangHijau;
			JagungDurian = jagungDurian;
			PulutHitam = pulutHitam;
			SantanMango = santanMango;
			Pudding = pudding;
			Fruits = fruits;
			ManisanOrder(); 
		}
		void ManisanOrder(){
			float totalBowls;
			cout << "\nHere Your Bubur/Manisan Order List" << endl;
			cout << "-------------------------------------" << endl;
			cout << "Bubur Kacang Hijau          :" << KacangHijau << " bowl(s)" << endl;
			cout << "Bubur Jagung + Durian       :" << JagungDurian << " bowl(s)" << endl;
			cout << "Bubur Pulut Hitam           :" << PulutHitam << " bowl(s)" << endl;
			cout << "Pulut, Santan & Mango       :" << SantanMango << " bowl(s)" << endl;
			cout << "Creamy Marble Pudding       :" << Pudding << " bowl(s)" << endl;
			cout << "Fresh Mix Local Fruits      :" << Fruits << " bowl(s)" << endl;
			totalBowls = KacangHijau + JagungDurian + PulutHitam + SantanMango + Pudding + Fruits;
			cout << "\n>>Total bowls               :" << setprecision(0) << fixed << totalBowls;
		}
		void calcPrice(){
			float priceKacangHijau = KacangHijau * 2.50;
			float priceJagungDurian = JagungDurian * 4.50;
			float pricePulutHitam = PulutHitam * 2.50;
			float priceSantanMango = SantanMango * 4.50;
			float pricePudding = Pudding * 2.00;
			float priceFruits = Fruits * 2.00;
			float totalPrice = priceKacangHijau + priceJagungDurian + pricePulutHitam + priceSantanMango + pricePudding + priceFruits;
			cout << "\n>Thank you. Your order price is RM " << setprecision(2) << fixed << totalPrice;
		}
};

int main(){
	Manisan BM;
	char option;
	float kacangHijau;
	float jagungDurian;
	float pulutHitam;
	float santanMango;
	float pudding;
	float fruits;
	cout << "---------------------------------------" << endl;
	cout << "      ++ Bubur & Manisan Stall ++      " << endl;
	cout << "---------------------------------------" << endl;
	cout << "Looking for a yummy Bubur/Manisan? [Y/N]" << endl;
	cin >> option;
	while(option=='Y'){
		cout << "\n........Yummy Bubur & Manisan Selection........." << endl;
		cout << "[1] Bubur Kacang Hijau (bowl)      : ";
		cin >> kacangHijau;
		cout << "[2] Bubur Jagung + Durian (bowl)   : ";
		cin >> jagungDurian;
		cout << "[3] Bubur Pulut Hitam (bowl)       : ";
		cin >> pulutHitam;
		cout << "[4] Pulut, Santan & Mango (bowl)   : ";
		cin >> santanMango;
		cout << "[5] Creamy Marble Pudding (bowl)   : ";
		cin >> pudding;
		cout << "[6] Fresh Mix Local Fruits (bowl)  : ";
		cin >> fruits;
		cout << "\nPlease be seated. Your order will be served shortly..." << endl;
		BM.Bubur_Manisan(kacangHijau, jagungDurian, pulutHitam, santanMango, pudding, fruits);
		BM.calcPrice();
		cout << "\n\nWould you like to make another order? [Y/N]" << endl;
		cin >> option;
	}
	cout << "\nPress any key to continue";
	return 0;
}
