#include <iostream>
#include <iomanip>
using namespace std; 

int multi(int, int);

int main (){
    int number1, number2, ans; 
	
    cout << "First Number :";
    cin >> number1;

    cout << "Second Number :";
    cin >> number2;

    ans = multi(number1, number2);

	cout << "\n "<<number1<<" * "
    <<number1<<" is " << ans << ".";

	return 0;
}

int multi(int first, int second){

    int ans;

    ans = first * second;

    return ans;

}
