#include <iostream>
using namespace std;

class geometry{
 	private:

		float PI, height, radius;

 	public:

        //constructor
	  	geometry(float hg, float rd);

        //destructor
	  	~geometry();

		friend class cylinder;
		   	  
		friend class cone;

};

class cylinder{

 	private:

	    float vol; 

 	public:

		void calc_vol(geometry *g);

};

class cone{

 	private:

	  	float vol; 

 	public:

		void calc_vol(geometry &g);

};

int main(){

 	float hg, rd;
 	cout << "Enter height : ";
	cin  >> hg;
 	cout << "Enter radius : "; 
	cin  >> rd;
	   
	geometry gmt(hg, rd);

	cylinder cyc;

	cyc.calc_vol(&gmt);

	cone cn;

	cn.calc_vol(gmt);

	return 0; 
      
}

//function in classes
void cylinder::calc_vol(geometry *g){

	vol = ((*g).PI) * ((*g).radius) * ((*g).radius) * ((*g).height);

	cout << "\nVolume of cylinder with radius " << (*g).radius << " and height " << (*g).height << " is : "	<< vol << endl;

}

void cone::calc_vol(geometry &g){

	vol =  (g.PI * g.radius * g.radius * g.height)/3;

	cout << "Volume of cone with radius " << g.radius << " and height " << g.height << " is : "	<< vol << endl;

}

geometry::geometry(float hg, float rd): PI(3.142), height(hg), radius(rd){}

geometry::~geometry(){

	cout << "\n= END OF PROGRAM =";
}
