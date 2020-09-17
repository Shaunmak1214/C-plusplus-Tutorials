#include<iostream>

using namespace std;

class Fraction
{
    private:
    int denom,nume;

    public:
    void setData(int a,int b)
    {
        nume = a;
        denom = b;
    }

    int getDenom()
    {
        return denom;
    }

    int getNume()
    {
        return nume;
    }
};

int isValid(Fraction ob)
{
   int valid;
   if( ob.getDenom() == 0 )
    {
      valid = 0;
      cout << endl << "Alert:Denominator is having value zero " << endl;
    }
   else if(ob.getNume() > ob.getDenom())
    {
         valid = 0;
         cout << endl << "Alert:Numerator greater than denominator" << endl;
    }
    else
    {
         valid = 1;
    }
    return valid;
}


int main()
{
    Fraction ob1[4];            // ob1[ 3 ] defines three objects
                                // ob1[0], ob1[1] and ob1[2]
   for( int i = 0; i < 3; i++ )
   {
       int valid;
    ob1[i].setData( i + 1, 2 - i );

    cout << "\nFraction " << i+1 << "/" << 2-i;
    valid = isValid(ob1[i]);

    if(valid == 0)
    {
        cout << " is invalid" << endl;
    }
    else if(valid == 1)
    {
        cout << " is valid" << endl;
    }

   }
   return 0;
}