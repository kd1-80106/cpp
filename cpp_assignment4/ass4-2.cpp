#include<iostream>
using namespace std ;

#define SIZE 5 



class Stack
{
   private :

   int top ;
   int capacity ;
   int *  arr ;

  public :

  Stack(int size = SIZE);  // ctor
  
  
  ~Stack() ;            // dtor 

  void push(int) ;

  int pop();

  int peek();

  int size();

  bool isFull();

  bool isEmpty();

  void print(){
   for(int i = 0 ; i < SIZE ; i++ )
   {
      cout << this-> arr[i] << endl ;
   }
  }
   


};

 Stack :: Stack(int size)
 {
    arr = new int[size];
    capacity = size ;
    top = -1 ;
 }

 Stack :: ~Stack()
 {
    delete[] arr;
 }

 bool Stack :: isFull()
 {
    return top == capacity - 1 ;
 }

 bool Stack :: isEmpty()
 {
    return top = -1 ;
 }

 int Stack :: peek()
 {
   if( !isEmpty() )
      return arr[top] ;
 }

 void Stack :: push(int x)
 { 
    if( !isFull())
      arr[++top] = x ;
 }
 int Stack :: pop()
 {
    if(isEmpty())
    {
        cout << "stack underflow " << endl ;
        return 0 ;
    }
    else 
    {
        int popval = arr[top];
        arr[top] = 0 ;
        top-- ;
        return popval ;
    }
 }
 int Stack :: size()
 {
   return top++ ;
 }

  

int main()
{
  
    
  Stack s1(5);

  for(int i = 1 ; i< 6 ; i++)
  {
   s1.push(i) ;
  }
  for(int i = 1 ; i< 6 ; i++)
  {
   s1.peek() ;
  }
 
   s1.print() ;
  

    return  0 ;
}


