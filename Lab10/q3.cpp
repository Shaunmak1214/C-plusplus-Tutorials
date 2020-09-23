#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Numbers {

    private:
    int *numbersOriginal;
    int size;

    public:
    Numbers(): size(3){

        numbersOriginal = new int [size];

        for(int i=0; i<size; i++) {

            numbersOriginal[i] = 5;

        }

    }

    ~Numbers() {

        delete[] numbersOriginal;
        //numbersOriginal = nullptr;

    }

    void getNumbers();
    void displayOriginal();
    void displaySorted();

};

int main() {

    Numbers N;

    cout << "Initial values by the default constructor :";
    N.displayOriginal();
    cout << endl;
    
    N.getNumbers();
    cout << "Display in the ascending order : ";
    N.displaySorted();
    cout << endl;
    cout << "Display in the original order : ";
    N.displayOriginal();
    cout << endl;
   

    Numbers X;

    cout << "Initial values by the default constructor : ";
    X.displayOriginal();
    cout << endl;
    
    X.getNumbers();
    cout << "Display in the ascending order : ";
    X.displaySorted();
    cout << endl;
    cout << "Display in the original order : ";
    X.displayOriginal();
    cout << endl;
    
    return 0;

}

void Numbers::displayOriginal() {

    for(int i=0; i<size; i++) {

        cout << numbersOriginal[i] << " ";

    }

}

void Numbers::getNumbers() {

    cout << "How many numbers are needed?" << endl;
    cin >> size;

    numbersOriginal = new int [size];

    for(int i=0; i<size; i++) {

        cout << "Number " << i+1 << ": ";
        cin >> numbersOriginal[i];
        cout << endl;

    }

}

void Numbers::displaySorted() {

    int *numberAsc = new int [size];
    int arrange;

    for(int i=0; i<size; i++) {

        numberAsc[i] = numbersOriginal[i];

    }

    for(int i=0; i<size; i++) {

        for(int j=0; j<size; j++) {

            if(numberAsc[i] < numberAsc[j]) {

                arrange = numberAsc[j];
                numberAsc[j] = numberAsc[i];
                numberAsc[i] = arrange;

            }

        }

    }

    for(int i=0; i<size; i++) {

        cout << numberAsc[i] << " "; 

    }

    delete [] numberAsc;
    numberAsc = nullptr;

}
