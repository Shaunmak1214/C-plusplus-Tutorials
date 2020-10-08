#include <iostream>
using namespace std;

class BasicShape {

    public:
    virtual double getArea() {

        cout << "Not possible to calculate the area of a basic shape" << endl;

    }

};

class Circle : public BasicShape {

    private:
    long centreX;
    long centreY;
    double radius;

    public:
    Circle( long x, long y, double rad ) : centreX( x ), centreY( y ), radius( rad ) {



    }

    long getCentreX() {

        return centreX;

    }

    long getCentreY() {

        return centreY;
        
    }

    virtual double getArea() override {

        double area = 3.14159 * radius * radius;
        return area;

    }
    
};


class Rectangle : public BasicShape {

    private:
    long width;
    long length;

    public:
    Rectangle(long w, long l) : width( w ), length( l ) {



    }

    long getWidth() {

        return width;

    }

    long getLength() {

        return length;

    }

    virtual double getArea() override {

            double area =  length * width;
            return area;

    }
};

int main() {

    long x, y, length, width;
    double rad;
    const int NUMBER_OF_OBJECTS = 5;
    char choice;
    
    BasicShape* shapes[ NUMBER_OF_OBJECTS ];

    for( int i = 0; i < NUMBER_OF_OBJECTS; i++ ) {

        cout << i + 1 << ". Circle [c] or Rectangle [any key]? ";
        cin >> choice;
        cout << endl;

        if( choice == 'c' ) {

            cout << "Please enter the x coordinate of the circle's centre: ";
            cin >> x;
            cout << "Please enter the y coordinate of the circle's centre: ";
            cin >> y;
            cout << "Please enter the radius of the circle: ";
            cin >> rad;
            shapes[i] = new Circle(x, y, rad);

        }else{
            
            cout << "Please enter the length of the rectangle: ";
            cin >> length;
            cout << "Please enter the width of the rectangle: ";
            cin >> width;
            shapes[i] = new Rectangle(width, length);

        }

        cout << endl << endl;

    }

    cout << "Areas of shapes displayed in reverse order.";    
    cout << endl;

    for(int i=NUMBER_OF_OBJECTS-1; i>=0; i--) {

        cout << "The area of shape " << i+1 << " is " << shapes[i]->getArea() <<endl; 

    }
    
    delete [] shapes;

    return 0;

}