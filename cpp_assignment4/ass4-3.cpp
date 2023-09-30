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


    ~Matrix()
    {
        for (int i = 0; i < row; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
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

   void multiply(Matrix *obj1, Matrix *obj2)
    {

        for (int r = 0; r < row; r++) // 0
        {
            for (int c = 0; c < col; c++) // 0
            {
                for (int k = 0; k < col; k++) // 00 00
                {
                    this->arr[r][c] += obj1->arr[r][k] * obj2->arr[k][c];
                }
            }
        }
    }

    void transpose()
    {
        // int temp = this->columns;
        // this->columns = this->rows;
        // this->rows = temp;

        int **array1 = new int *[row];
        ;
        for (int i = 0; i < row; i++)
        {
            array1[i] = new int[col];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                array1[j][i] = this->arr[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                this->arr[i][j] = array1[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            delete[] array1[i];
        }
        delete[] array1;
    }
 


  
};
int main()
{
    int rows, cols;
    cout << "Enter the Number of Rows and Columns for Matrix 1: ";
    cin >> rows >> cols;

    Matrix object1(rows, cols);
    object1.acceptArr();
    cout << "---------****************--------------" << endl;
    object1.printArr();
    cout << "---------****************--------------" << endl;

    cout << "Enter the Number of Rows and Columns for Matrix 2: ";
    cin >> rows >> cols;

    Matrix object2(rows, cols);
    object2.acceptArr();
    cout << "---------****************--------------" << endl;
    object2.printArr();
    cout << "---------****************--------------" << endl;

    Matrix object3(rows, cols);
    object3.addArr(&object1, &object2);
    cout << "--------------ADDITION--------------" << endl;
    object3.printArr();

    object3.subArr(&object1, &object2);
    cout << "------------SUBSTRACTION--------------" << endl;
    object3.printArr();

    object3.multiply(&object1, &object2);
    cout << "--------------MULTIPLY--------------" << endl;
    object3.printArr();

    object3.transpose();
    cout << "--------------TRANSPOSE--------------" << endl;
    object3.printArr();

    return 0;
}

    
    

