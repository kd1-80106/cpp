#include<iostream>
#include"cylinder.h"
using namespace std ;



class Cylinder
{  private :
   double radius ;
   double height ;

   public :

   Cylinder() {}

    Cylinder(double radius , double height) 
    { 
     this -> radius = radius ;
     this -> radius = height ;
    }

    void setRadius(double radius)
    {
        this -> radius = radius ;
    }

    void setHeight(double height)
    {
        this -> height = height ;
    }

    double getRadius()
    {
        return radius ;
    }
    double getHeight()
    {
        return height ;
    }
    double getVolume()
    {
        return 3.14 * this ->radius * this -> radius * this -> height ;
    }

    void printVolume()
    {
        cout << " VOLUME OF CYLINDER = " << getVolume() << endl ;
        
    }

};
