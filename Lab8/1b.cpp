#include <iostream>
using namespace std;

class geometry{
 	private:

	float PI, height, radius, length;

 	public:

	geometry(float hg, float rd, float lg);

	~geometry();

	friend class cylinder;
	friend class cone;
	friend class cube;

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

class cube{

	private:

		float vol;

	public:

		void calc_vol(geometry &g);

};

int main(){

 	float hg, rd, lg;

 	cout << "Enter height : ";
	cin  >> hg;

 	cout << "Enter radius : "; 
	cin  >> rd;

	cout << "Enter length : ";
	cin >> lg;
	   

	geometry gmt(hg, rd, lg);

	cylinder cyc;

	cyc.calc_vol(&gmt);

	cone cn;

	cn.calc_vol(gmt);

	cube cb;

	cb.calc_vol(gmt);

	return 0; 

}

void cylinder::calc_vol(geometry *g){

	vol = ((*g).PI) * ((*g).radius) * ((*g).radius) * ((*g).height);
	cout << "\nVolume of cylinder with radius " << (*g).radius << " and height " << (*g).height << " is : "	<< vol << endl;
    
}

void cone::calc_vol(geometry &g){

	vol =  (g.PI * g.radius * g.radius * g.height)/3;
	cout << "Volume of cone with radius " << g.radius << " and height " << g.height << " is : "	<< vol << endl;

}

void cube::calc_vol(geometry &g){

	vol = g.length * g.length * g.length;
	cout << "Volume of cube with length " << g.length << " is : "	<< vol << endl;

}
		
geometry::geometry(float hg, float rd, float lg): PI(3.142), height(hg), radius(rd), length(lg){}

geometry::~geometry(){

	cout << "= END OF PROGRAM =";
    
}
