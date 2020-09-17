#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Trivia{  

    private:
    string name, country, game_name;
    int age;
    double score[3];
    char status [20];

    public:
    void setParticipant(){ 

        cout<<"\nEnter Name        : ";
	    getline(cin, name);

        fflush(stdin);

	    cout<<"Enter Country       : ";
	    getline(cin, country);

	    cout<<"Enter Age           : ";
	    cin>>age;
	    cin.ignore();

	    cout<<"Enter Game Name  : ";
	    getline(cin, game_name);   

    }

    void score_gained(){

        for(int i=0; i<3; i++){

            cout << "\nEnter Score" << i+1 << " :" ;
            cin >> score[i];

        }

    }
    void average_Val(){
        
        double avg, total;

            for(int i=0; i<3; i++){

                total = total + score[i];

            }

        avg = total /3;
        set_status(avg);

    }

    void set_status (double avg){

        if (avg >= 80 && avg <= 100)
		    strcpy(status , "Excellent");

	    else if (avg >= 60 && avg < 80)
		    strcpy(status , "Great");

	    else if (avg >= 50 && avg < 60)
		    strcpy(status , "Keep Trying");

	    else
		    strcpy(status, "Loser");
    }

    void display_result(){

       cout << "-------------------" << endl;
       cout << "   RESULT SCORED   " << endl;
       cout << "-------------------" << endl;
       cout << "Name        :" << name << endl;
       cout << "Country     :" << country << endl;
       cout << "Age         :" << age << endl;
       cout << "Game name   :" << game_name << endl;

       for(int i=0; i<3; i++){
           cout << "    Score" << i+1 << " :" << score[i] << endl;
       }

       cout << "    Status :" << status << endl;

   }

};

int main(){

    Trivia TV;
    Trivia *TV1;
    int warrior;

    TV1 = &TV;

    cout << "How many warrior? ";
    cin >> warrior;

    for(int i=0; i<warrior; i++){

        fflush(stdin);
        
        TV1 -> setParticipant();
        TV1 -> score_gained();
        TV1 -> average_Val();
        TV1 -> display_result();
    }
}
