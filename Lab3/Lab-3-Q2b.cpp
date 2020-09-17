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

    int getlength() {

		return length;

	}
	
	int getwidth() {

		return width;

	}
	
	int getheight() {

		return height;

	}

    int getvolume(){

        return volume;

    }

};

int main(){

    cuboid q;

    q.setdata();
    q.findvolume();

    cout << "------Display Cuboid Data-------" << endl;
    cout << "Width  :" << q.getwidth() << "cm" << endl;
    cout << "Length :" << q.getlength() << "cm" << endl;
    cout << "Height :" << q.getheight() << "cm" << endl;
    cout << "Volume :" << q.getvolume() << "cm^3" << endl;

    return 0;
}
