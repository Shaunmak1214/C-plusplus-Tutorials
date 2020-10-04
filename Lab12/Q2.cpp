#include <iostream>
#include <iomanip>

using namespace std;

class BasicShape {

    private:
    double area;

    public:
    //setter function
    double getArea() {

        return area;

    }

    virtual void calcArea() {

        cout << "Not possible to calculate the area of a basic shape" << endl;
        
    }

    void setArea(double a) {

        area = a;

    }

};

class Circle : public BasicShape {

    private:

    long centreX;
    long centreY;
    double radius;
        
    public:

    Circle( long x, long y, double rad ) : centreX( x ), centreY( y ), radius( rad ) {
            
        calcArea();

    }

    long getCentreX() {

        return centreX;

    }

    long getCentreY() {

        return centreY;

    }

    void calcArea()	{

        double temp = 3.14159 * radius * radius;
        setArea(temp);

    }

};


class Rectangle : public BasicShape {

    private:

    long width;
    long length;

    public:

    Rectangle(long w, long l): width( w ), length( l ) {

        calcArea();

    }

    long getWidth() {

        return width;

    }

    long getLength() {

        return length;

    }

    void calcArea() {

        double temp = length * width;
        setArea(temp);

    }
};

int main() {

   long x, y, length, width;
   double rad;
   char choice;
   const int noObject = 5;

   BasicShape* shapes[noObject];

    for(int i=0; i< noObject; ++i) {

        cout << i + 1 << ". Circle [c] or Rectangle [any key]? ";
        cin >> choice;
        cout << endl;

        if(choice == 'c') {

            cout << "Please enter the x coordinate of the circle's centre: ";
            cin >> x;
            
            cout << "Please enter the y coordinate of the circle's centre: ";
            cin >> y;

            cout << "Please enter the radius of the circle: ";
            cin >> rad;

            shapes[i] = new Circle(x, y, rad);
            shapes[i]->calcArea();

        }else{

            // Demonstrate a Rectangle.
            cout << "Please enter the length of the rectangle: ";
            cin >> length;

            cout << "Please enter the width of the rectangle: ";
            cin >> width;

            shapes[i] = new Rectangle(width, length);

        }

        cout << "\n\n";

    }

    cout << "Areas of shapes displayed in reverse order.";    
    cout << endl;
    
    for(int i=noObject-1; i>=0; i--) {

        cout << "The area of shape " << i+1 << " is " << shapes[i]->getArea() << endl; 

    }
    
    delete [] shapes;

    return 0;
}
