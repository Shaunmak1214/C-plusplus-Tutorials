#include<iostream>
using namespace std;

class MasterStudent{  

    string name, title;
    int status;
    
    public: 
    MasterStudent(string n, string t, int x){  

        name = n;
        title = t;
        status = x;
    }
     
    MasterStudent(){ 
        name = "";
        title = "";
        status = NULL;
    }
     
    int getStatus(){ 
        return status;
    }
     
    string getName(){ 
        return name;
    }
     
    string getTitle(){ 
        return title;
    }
     
    ~MasterStudent(){ 
        cout << "\n\n~End of Details~Student~" << name <<endl;
    }

}; 

int main(){ 

    MasterStudent MS[5] = {
                                {"Johanes Kai", "Working with Generation X employees: food industry", 1},
					 			{"Cameron Chan", "Collective Co-Creation within the Open Source Software Community", 1},
					 			{"Meriam Azlan", "What Makes Online Video Advertisements Go Viral?", 0},
					 			{"Peter Pan", "A Study on Form 1 student's learning of Algebra", 1},
					 			{"Dory Dory", "Social media use for corporate communication", 0}
    };

    for(int i=0; i<5; i++){

        cout << "=================================" <<endl; 
        cout << "   Masters Student Details       " << i+1 <<endl;
        cout << "=================================" <<endl;
        cout << "Name \t: " << MS[i].getName() <<endl;
        cout << "Title \t: " << MS[i].getTitle() <<endl;
        cout << "Status \t: ";

        if(MS[i].getStatus() ==1){
            cout << "Approved" << endl;
            
        }else{ 
            cout << "Pending" << endl;
        }
    }


        return 0;
}
