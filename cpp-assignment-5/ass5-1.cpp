#include <iostream>

using namespace std;

class student
{
private:
  int rollno;
  int total_marks;
  string name;
  string gender;

public:
  void acceptStudent()
  {
    cout << " enter roll number " << endl;
    cin >> this->rollno;

    cout << " enter total_marks of 3 subjects  " << endl;
    cin >> this->total_marks;

    cout << " enter name of the student " << endl;
    cin >> this->name;

    cout << "enter gender " << endl;
    cin >> this->gender;
  }

  void displayStudent()
  {
    cout << "*********************************" << endl;
    cout << " roll number = " << rollno << endl;
    cout << " total marks of 3 subjects out of 300  = " << total_marks << endl;

    cout << " name of the student = " << name << endl;
    cout << " gender of student = " << gender << endl;

    cout << "********************************" << endl;

    cout << endl;
  }
  friend int search(student *arr[], int N, int x);
};

int search(student *arr[], int N, int x)
{
  for (int i = 0; i < N; i++)
    if (arr[i]->rollno == x)
      return i;
  return -1;
}


int menu()
{
  int choice;
  cout << "*****************************************" << endl;
  cout << " 0. for EXIT " << endl;
  cout << " 1. for ACCEPT " << endl;
  cout << " 2. for DISPLAY " << endl;
  cout << " 3. for SORT " << endl;
  cout << " 4. for SEARCH " << endl;
  cout << "**************************************" << endl;
  cout << " enter the choice " << endl;
  cin >> choice;
  return choice;
}
int main()
{
  int n, choice;
  cout << " enter  total number of students " << endl;
  cin >> n;

  student *arr[n];

  while ((choice = menu()) != 0)
  {
    switch (choice)
    {
    case 1:

      for (int i = 0; i < n; i++)
      {
        arr[i] = new student;
      }
      break ;

    case 2:
      for (int i = 0; i < n; i++)
      {
        arr[i]->acceptStudent();
      }
      break ;

    case 3:

      for (int i = 0; i < n; i++)
      {
        arr[i]->displayStudent();
      }
      break ;

      case 4 :
      for(int i = 0 ; i < n ; i++)
      {
        
      }

      default :
        cout << " wrong choice entered " << endl ;
    }


    for (int i = 0; i < n; i++)
    {
      delete arr[i];
    }
    for (int i = 0; i < n; i++)
      arr[i] = NULL;

    
  }
  return 0;
}