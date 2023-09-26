#include<iostream>
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

enum volume
{
    EXIT = 0 ,
    CYLINDER_PARAMETERIZED =1 ,
    SET_RADIUS = 2 ,
    SET_HEIGHT = 3, 
    GET_RADIUS = 4 ,
    GET_HEIGHT = 5 ,
    GET_VOLUME  = 6 ,
    PRINT_VOLUME = 7

} ;

volume Emenu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. CYLINDER_PARAMETERIZED " << endl;
    cout << "2. SET_RADIUS " << endl;
    cout << "3. SET_HEIGHT " << endl;
    cout << "4. GET_RADIUS " << endl;
    cout << "5. GET_HEIGHT " << endl;
    cout << "6. GET_VOLUME " << endl;
    cout << "7. PRINT_VOLUME " << endl;

    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return volume(choice);
}

int main()
{
  Cylinder v1;
  int choice ;

  while ((choice = Emenu()) != EXIT)
    {
        switch (choice)
        {
        case CYLINDER_PARAMETERIZED :
            Cylinder() ;
            break;

        case SET_RADIUS :
            v1.setRadius(12.2);
            break;

        case SET_HEIGHT :
            v1.setHeight(10.5);
            break;
        case GET_RADIUS :
            v1.getRadius() ;
            break;
        case GET_HEIGHT :
            v1.getHeight() ;
            break;   
        case GET_VOLUME :
            v1.getVolume();
            break;

         case PRINT_VOLUME :
            v1.printVolume() ;
            break;    
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
}