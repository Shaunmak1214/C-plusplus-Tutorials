#include <iostream>
#include <iomanip>

using namespace std;

class cuboid{

    public:
    double length, width, height, volume;

    void setdata(){

    cout << "Enter the width, length, height of a Cuboid object : ";
    cin >> width >> length >> height;

    }

    void findvolume(){

        volume = width * length * height;

    }

    void display(){

        cout << "------Display Cuboid Data-------" << endl;
        cout << "Width  :" << width << "cm" << endl;
        cout << "Length :" << length << "cm" << endl;
        cout << "Height :" << height << "cm" << endl;
        cout << "Volume :" << volume << "cm^3" << endl;

    }

};

int main(){

    cuboid q;

    q.setdata();
    q.findvolume();
    q.display();

    return 0;
}
