#include<iostream>

using namespace std ;

class Date 
{
    int day ;
    int month ;
    int year ;
  
  public :
  
    void initDate()
    {
        day = 12 ;
        month = 12 ;
        year = 2000;
    }
    
    void acceptDateFromConsole()
    {
        cout << "enter day " << endl ;
        cin >> day ;

         cout << "enter month " << endl ;
        cin >> month ;

         cout << "enter year  " << endl ;
        cin >> year  ;
    }


    bool isLeapYear()
    {
        
        if( (this->year%100!=0 && this->year % 4 == 0 )|| this->year%400==0)
          { cout << endl ;
            cout << this->year<<" IS A LEAP YEAR " << endl ;
          return true ;
          }
          else
            return false;
        
    }

    void printDateOnConsole()
    {
        cout << "Date is " << day << " - " << month << " - " << year << endl ;
    }

};

int main()
{
    int choice ;
     Date d1 ;

    while(1)
    {
    
    cout<<"1.init date " << endl << "2. accept date from console " << endl << "3. is leap year " 
    << endl << "4. print date on console " << endl << "5. out of loop " << endl ;
    
    
    cout <<  " enter the choice to perform \n " << endl ;
    cin >> choice ;

    switch (choice)
    {
    case 1 :
        d1.initDate() ;
        break;
    case 2 : 
        d1.acceptDateFromConsole();
        break ;

    case 3 : 
        d1.isLeapYear();
        break ;

    case 4 :
        d1.printDateOnConsole();
        break ;
    case 5 :
        cout<<"OUT OF LOOP"<<endl;
        return 0 ;    


    default:
        break;
    }

    
    }


}