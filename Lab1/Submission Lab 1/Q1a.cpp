#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << "Sales Report for September 15,2010" << endl;

    cout << setw(10) << "Artist" << setw(10) << "Title" << setw(10) << "Price" <<
            setw(10) << "Genre" << setw(10) << "Disc" << setw(10) << "Sale" << endl;

    cout << setw(10) << "Merle" << setw(10) << "Blue" << setw(10) << "12.99" <<
            setw(10) << "Country" << setw(10) << "4%" << setw(10) << "12.47" << endl;

    cout << setw(10) << "Richard" << setw(10) << "Music" << setw(10) << "8.49" <<
            setw(10) << "Classical" << setw(10) << "8%" << setw(10) << "7.81" << endl;

    return 0;

}