#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay()
    {
        return this->day;
    }

    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void displayDate()
    {
        cout << "Date is : " << this->day << " / " << this->month << " / " << this->year << endl;
    }

    void acceptDate()
    {
        cout << " enter the day " << endl;
        cin >> this->day;

        cout << " enter the month " << endl;
        cin >> this->month;

        cout << " enter the year " << endl;
        cin >> this->year;
    }

    bool is_leap_year(int year)
    {
        if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
        {   cout << year << " is a leap year " << endl ;
            return true; }
        else
        {cout << year << " is not a leap year " << endl ;
            return false;}
    }
};


class person
{
  private :
  string name ;
  string address ;
  date bdate;

  public :

  person(){}

  person(string name , string address , int day , int month , int year) : bdate(day,month,year)
  {
    this -> name = name ;
    this -> address = address ;
  }

  string get_name()
  {
    return this -> name ;
  }
  string get_Address()
  {
    return this -> address ;
  }

  date get_bdate()
  {
    return bdate;
  }

  void set_Name(string name)
  {
    this -> name = name ;
  }

  void set_Address(string address)
  {
    this -> address = address ;
  }
void setBirthDate(int day , int month , int year)
{
    bdate.setDay(day);
    bdate.setMonth(month);
    bdate.setYear(year);

}

void displayPerson()
{
    cout << " name = " << this -> name << endl ;
    cout << " address = " << this -> address << endl ;
    this -> bdate.displayDate();

}

void acceptPerson()
{
    cout << " enter name " << endl ;
    cin >> this ->name ;

    cout << " enter address " << endl ;
    cin >> this -> address ;

    cout << " enter birth date " << endl ;
    this -> bdate.acceptDate();

}

};
class employee : public person          // inheritance 
{
    private :

     int id ;
     float salary;
     string dept ;
     date doj ;

     public :

     employee()
     {

     }

     employee(int id , float salary , string dept ,int day ,int month , int year) : doj(day,month ,year)
     {
        this -> id = id ;
        this -> salary = salary ;
        this -> dept = dept ;

     }

     int getId()
     {
        return this -> id ;
     }

     float getSalary()
     {
        return this -> salary ;
     }

     string getDept()
     {
        return this -> dept ;
     }

     date getJoiningdate()
     {
        return this->doj;
     }
     void setJoiningDate(int day , int month , int year)
     { 
        doj.setDay(day) ;
        doj.setMonth(month) ;
        doj.setYear(year) ;

     }
     void setDeot(string dept)
     {
        this -> dept = dept ;
     }

     void displayEmployee()
     {
        cout << " empid  = " << this -> id << endl ;
        cout << " salary = " << this -> salary << endl ;
        cout << " dept = " << this -> dept << endl ;
        this -> doj.displayDate();
        
     }

     void acceptEmployee()
     {
        cout << " enter empid  " << endl ;
        cin >> this-> id ;
        cout << " enter salary " << endl ;
        cin >> this-> salary ;

        cout << " enter dept " << endl ;
        cin >> this -> dept ;
     }



};


int main()
{
    
    // date d1(11,8,2022);
    // d1.acceptDate();
    // d1.displayDate();
   
    // d1.setDay(22);
    // d1.setMonth(10);
    // d1.setYear(2022) ;

    // d1.getDay();
    // d1.getMonth();
    // d1.getYear();
    
    // d1.displayDate();

    // person p1 ;
    // p1.acceptPerson();
    // p1.displayPerson();
    // p1.set_Address("austria");
    // p1.set_Name("SCOTT");
    // p1.setBirthDate(10,10,2000);
    // p1.displayPerson();


    employee e1;
    e1.acceptEmployee();
    e1.displayEmployee() ;
    e1.setDeot("ACCOUNT") ;
    e1.setJoiningDate(12,12,2011) ;
    e1.displayEmployee();

    return 0 ;
}
