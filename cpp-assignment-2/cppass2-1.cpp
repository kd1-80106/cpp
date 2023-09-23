#include<iostream>
using namespace std ;
namespace NStudent
{
   
    class student 
{
    
    int rollno ;
    int marks ;
    string name ;

public :
    void initStudent()
    {    

        cout << endl ;
        rollno = 0001 ;
        marks = 100 ;
        name = "rohul" ;
    }


    void acceptStudentFromConsole()
    {   
        cout << endl ;
        cout << " enter name of the student " << endl ;
        cin >> name ;

        cout << " enter roll number " << endl ;
        cin >> rollno ;

        cout << " enter marks " << endl ; 
        cin >> marks ;
    }

    void printStudentOnConsole()
    {     cout << endl ;
         cout << "roll number : " << rollno << endl
              << " name of the student  : " << name << endl 
              << " marks of the student  : " << marks << endl ;
    }
};

int main()
{    
    student s1 ;
    int choice ;

  cout<<"1.init student " << endl << "2. accept student data from console "  
    << endl << "3. print date on console " << endl << "4. out of loop " << endl ;
    
    while(1)
    { 
       
        
        
        cout << " enter choice " << endl ;
        cin >> choice ; 
    

         switch(choice)
         {
            case 1 :
               s1.initStudent();
               break ;

            case 2 :
            s1.acceptStudentFromConsole();
            break ;
            
            case 3 : 
            s1.printStudentOnConsole();
            break ;

            case 4 :
            cout<<"OUT OF LOOP"<<endl;
            return 0 ; 
        
            default :
            break ;
         }


    }

    return 0 ;
}
}