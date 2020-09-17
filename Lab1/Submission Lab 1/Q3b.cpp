#include <iostream>
#include <string>       
#include <cctype>  
#include <cstdio>   

using namespace std;

int main(){    
    
    char ch;
    int vowelCount = 0;
    string sentence;

    cout << "Enter any sentence you wish and I will \n"
		 << "\nDisplay the sentence in uppercase.\n" << endl;

	getline(cin, sentence);

        for (int pos = 0; pos < sentence.length(); pos++){	
            
            ch = sentence[pos];
            putchar(toupper(ch));
            
        }
      return 0;
}
