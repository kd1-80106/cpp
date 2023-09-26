#include"menu.h"
#include<iostream>
using namespace std ;


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
