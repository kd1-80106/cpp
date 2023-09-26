#include<iostream>
using namespace  std ;

class Matrix 
{ 
  private: 

  int row ;
  int col ;

  int** arr ;

  public :

  Matrix()
  {
    this-> row = 0 ;
    this -> col = 0 ;
    
  }

  Matrix(int row ,int col)
  {
    this -> row = row ;
    this -> col = col ;
    arr = new int*[row] ;

    for(int i = 0 ; i < row ; i++)
    {
        arr[i] = new int[col];
    }
  }
  
  void acceptArr()
  {
    cout <<" enter the matrix values " << endl ;
    for(int i = 0 ; i< row ;i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            cin >> arr[i][j];
        }
    }
  }

  void printArr()
  {
    cout << " the result = " << endl ;
    for(int i = 0 ; i< col ;i++)
    {  
        cout << endl ;
        for(int j = 0 ; j < col ; j++)
        {
            cout << arr[i][j] <<"\t" ;
        }
        cout << endl ;
    }

  }

  void addArr(Matrix* m1 , Matrix* m2)
  {
     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
         arr[i][j] = m1->arr[i][j] + m2 -> arr[i][j] ;
        }
     }
  }

  void subArr(Matrix * m1 , Matrix * m2)
  {
     for(int i = 0 ; i < row ; i++)
     {
        for(int j = 0 ; j < col ; j++)
        {
         arr[i][j] = m1->arr[i][j] - m2 -> arr[i][j] ;
        }
     }
  }
  
};
int main()
{
    Matrix m1(2,2) ;
    m1.acceptArr();

    
    Matrix m2(2,2);
    m2.acceptArr();

    Matrix m3(2,2);
    m3.addArr(&m1,&m2) ;
    m3.printArr();

    m3.subArr(&m1,&m2);
    m3.printArr(); 

    
    


    return 0 ;
}