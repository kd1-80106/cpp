#include<iostream>
using namespace std ;

class Tollbooth 
{
    unsigned int car_count ;
    double amt ;

    public :

    Tollbooth()
    {
        this -> car_count = 0 ;
        this -> amt = 0 ;
    }

    void payingCar()
    {   
        cout << "car_amt + 1 " << endl ;
        this -> car_count = this -> car_count + 1 ;
        this -> amt = this -> amt + 0.50 ;
    }

    void nopayCar()
    {
        this -> car_count = this->car_count+ 1 ;
    }


    void printOnConsole()
    {
        cout << "-----------------------------------------------------" << endl ;
        cout << " car count = " << car_count << endl ;
        cout << " total amount = " << amt << endl ;
        cout << " no. of paying cars = " << amt / 0.5  << endl ;
        cout << " no. of non paying cars  = " << car_count - ( amt / 0.5) << endl ;
        cout << "-----------------------------------------------------" << endl ;
    }

};

enum TOLL
{
    EXIT = 0 ,
    TOLLBOOTH ,
    PAYING_CAR ,
    NOT_PAYING_CAR,
    DISPLAY 
};

TOLL Emenu() 
{ 
    {
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Tollbooth " << endl;
    cout << "2. payingCar " << endl;
    cout << "3. nopayCar " << endl;
    cout << "4. dispay  " <<  endl ; 
    cin >> choice;
    cout << "*******************" << endl;
    return TOLL(choice);
}

};

int main()
{   
    

    Tollbooth t1 ;
    TOLL choice ;
    while ((choice = Emenu()) != EXIT)
    {
        switch (choice)
        {
        case TOLLBOOTH :
              Tollbooth() ;
            break;
        case PAYING_CAR : 
            t1.payingCar() ;
            break;
        case NOT_PAYING_CAR :
            t1.nopayCar() ;
            break;

        case DISPLAY :
          t1.printOnConsole();
          break ;

        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;

    return 0 ;
}