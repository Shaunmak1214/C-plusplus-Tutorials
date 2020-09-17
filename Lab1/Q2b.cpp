#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int x=0, num, even=0, odd=0, total=0;

        do{
            cout << "Enter a number : ";
            cin >> num;
            cout << endl;

                if(num%2 == 0){  
                    even = even + 1;
                }else{
                    odd = odd + 1;
                }

            total = total + num;
            x++;

        }while(x<10);

    cout << "There are " << even << " even numbers and " << odd << " odd numbers.\n";
    cout << "The total of all the " << x << " numbers are " << total;

    return 0;
}
