#include<iostream>

using namespace std ;

class Time
{
  private :
  int h ;
  int m ;
  int s ;

  public :

  Time(){} 

  Time(int h , int m , int s)
  {
    this ->h = h ;
    this -> m = m ;
    this -> s = s ;
  }

  void displayTime()
  {
    cout<< "--------------------DISPLAY TIME ------------------------" << endl ;
    cout << " HH : MM : SS  = " << h << " : " << m << " : " << s << endl ; 
  }

  void setHr(int h)
  {
    cout<< "--------------------SET HR------------------------" << endl ;
    this -> h = h ;
  }

   void setMin(int h)
  {
    cout<< "--------------------SET MIN------------------------" << endl ;
    this -> m = m ;
  }
  
   void setSec(int h)
  {
    cout<< "--------------------SET SEC------------------------" << endl ;
    this -> s = s ;
  }

  int getHr()
  { 
    cout<< "--------------------GET HR------------------------" << endl ;
    return this->h ;
  }

   int getMin()
  {
    cout<< "--------------------GET MIN------------------------" << endl ;
    return this-> m ;
  }
  
   int getSec()
  {
    cout<< "--------------------GET SEC------------------------" << endl ;
    return this->s ;
  }

};

int main()
{

   Time** arr = new Time*[3] ;

 

   for(int i = 0 ; i < 3 ; i++)
   {
    arr[i] = new Time() ;
   }

    for(int i = 0 ; i < 3 ; i++)
   {
    arr[i]->setHr(12) ;
    arr[i] -> setMin(50) ;
    arr[i] -> setSec(10) ;
   }

    for(int i = 0 ; i < 3 ; i++)
   {
    cout << arr[i]->getHr() << endl ;
    cout << arr[i] -> getMin() << endl ;
    cout << arr[i] -> getSec() << endl ;
   }

   for(int i = 0 ; i < 3 ; i++)
   {
    arr[i]->displayTime() ;
   }
   for(int i = 0 ; i < 3 ; i++)
   {
    
    arr[i]->displayTime() ;
   }


   for(int i = 0 ; i < 3 ; i++)
   {
    delete[] arr[i] ;
   } 

    return 0 ;
}