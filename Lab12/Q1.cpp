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

    void calcArea() {

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

   // Demonstrate a Circle.
   cout << "Please enter the x coordinate of the circle's centre: ";
   cin >> x;
   
   cout << "Please enter the y coordinate of the circle's centre: ";
   cin >> y;

   cout << "Please enter the radius of the circle: ";
   cin >> rad;

   Circle c( x, y, rad );
   cout << "The area of the circle is " << c.getArea() << ".";

   // Demonstrate a Rectangle.
   cout << endl << endl << "Please enter the length of the rectangle: ";
   cin >> length;

   cout << "Please enter the width of the rectangle: ";
   cin >> width;

   Rectangle r(width, length);
   cout << "The area of the rectangle is " << r.getArea() << ".\n";

   return 0;
}
