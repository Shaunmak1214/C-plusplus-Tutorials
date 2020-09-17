#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class NumberGame{

    int array[5];

    public: 
    NumberGame();
    friend void search(NumberGame, int);

    void display(){
        for(int i=0; i<5; i++){
            cout << array[i] << endl;
        }
    }
};

int main(){

    NumberGame G;
    int num;

    cout << "Enter a number : ";
    cin >> num;

    search(G, num);

    return 0;
}

NumberGame::NumberGame(): array{16, 20, 33, 38, 100} { }

void search(NumberGame game, int no){
    int i=0;

    bool found = false;

    do {
		
        if(no == game.array[i]){

            found = true;
            break;

        }else{

            found = false;

        }

        i++;

    }while(i<5);

    if(found == true) {
        cout << no << " is found ! " << endl;
    } else {
        cout << no << " is NOT found !" << endl;
    }
}   
