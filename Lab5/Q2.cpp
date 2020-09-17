#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Achievement{
    string classname, result;
    int score;

    public:
    void set_data(string name1, int score1){
        classname = name1;
        score = score1;
    }

    void display_scale(){
        if(score>=85 && score<=100){
            result = "*****";
        }else if(score>=70 && score<=84.9){
            result = "****";
        }else if(score>=60 && score<=69.9){
            result = "***";
        }else if(score>=50 && score<=59.9){
            result = "**";
        }else{
            result = "Poor Achievement";
        }

        cout << "====================================" << endl;
        cout << classname << endl;
        cout << "The Class Passing Grade Achievement: " << score <<"%"<< endl;
        cout << result << endl;
    }
};


int main(){
    Achievement a[4];
    string name;
    int score;

    cout << "===================================" << endl;
    cout << "      Enter Class Achievement      " << endl;
    cout << "===================================" << endl;

    for( int i = 0; i < 4; i++ ){
       
        cout << "\nEnter the class name       : ";
        cin >> name;
        cout << "The class achievement (%)  : ";
        cin >> score;
        a[i].set_data(name, score);
    }

    cout << "\n\n" << endl;
    cout << " THE SUMMARY OF UPSR TRIAL EXAM RESULT  " << endl;

    for (int i=0; i<4; i++){
        a[i].display_scale();
    }

    cout << "========================================" << endl;

    return 0;
}