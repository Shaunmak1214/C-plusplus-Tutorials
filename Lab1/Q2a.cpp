#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	
	int reghour, totalhour, overtimehour;
	float overtimerate, basepayrate, regwages, overtimewages, totalwages;
	
	reghour = 40;
	overtimerate = 24.35;
	basepayrate = 18.50;
	
	cout << "Please enter total hours you've worked this week: ";
	cin >> totalhour;
	
	if(totalhour > 40){
		
		overtimehour = totalhour - reghour;
		
	}else{
		
		overtimehour = 0;
		reghour = totalhour;
		
	}
	
	regwages = basepayrate * reghour;
	overtimewages = overtimerate * overtimehour;
	totalwages = regwages + overtimewages;
	
	cout << setprecision(2) << fixed << endl << "Wages for this week are RM" << totalwages;
	
	return 0;
	
}
