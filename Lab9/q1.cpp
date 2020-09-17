#include<iostream>
using namespace std;

class ArtificialGrass {
	
	private:
		int length, width, depth;
		
	public:
		void grass_date(int q, int r, int s) {
			length = q;
			width = r;
			depth = s;
		}
		
		int grass_gauge() {
			return length * width * depth;
		}
		
		ArtificialGrass() {
			length = 4;
			width = 6;
			depth = 3;
		}
		
		~ArtificialGrass() {
			cout << "Deleting the artificial grass details." << endl;
		}
};

int main() {
	
	ArtificialGrass *ag = new ArtificialGrass;
	
	cout << "+++++++++++++++++++++++++++++++++" << endl;
	cout << "  The Artificial Grass Details  " << endl;
	cout << "+++++++++++++++++++++++++++++++++" << endl;
	cout << "The Previous Batch Set left..." << endl;
	cout << "Available Grass Size : " << ag -> grass_gauge() << " cm [2pieces in one set]" << endl;
	cout << "Deleting the artificial grass details." << endl;
	cout << endl;
	
	delete ag;
	
	const int x = 3;
	int q, r, s;
	ArtificialGrass *ag_array = new ArtificialGrass[x];
	
	cout<<endl;
	cout<<"================================="<<endl;
	cout<<" The Stocks Available  "<<endl;
	cout<<"================================="<<endl;
	
	for(int counter=0; counter<x; counter++) {
		ag_array->grass_date(counter+2, counter+2, counter+2);
		
		cout<<"The Grass Size SET#"<<counter+1<<endl;
		cout<<"->> "<<ag_array->grass_gauge()<<"cm [2 pieces in one set]"<<endl;
	}
	
	cout<<endl;
	
	delete [] ag_array;

   	return 0;
}