#include <iomanip>
#include <iostream>

using namespace std;

//cal = bb_4ac
//getabc = get_a_b_c

double cal(); 
void getabc(double &, double &, double &);


int main (){

    double a, b, c, ans;
    ans = cal();
    cout << "The discriminant is " << ans << endl;

    return 0; 

}

double cal(){

    double a, b, c;

    getabc(a, b, c);

    return b*b-4*a*c ;
}

void getabc(double &a, double &b, double &c){

    cout << "Enter a, b and c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
}