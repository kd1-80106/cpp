#include <iostream>
using namespace std;

class Volume
{
    int length;
    int breadth;
    int height;

public:
    Volume() {}

    int calculateDimensions()
    {
        cout << "volume of cube = " << (this->length * this->breadth * this->height);
    }

    Volume(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void displayVolume()
    {

        cout << "--------------------------------------------------" << endl;
        cout << "volume of cube " << calculateDimensions();
    }
};

enum VOL
{
    EXIT,
    PASS_DIMENSIONS,
    CALCULATION,
    DISPLAY
};

VOL menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. PASS DIMENSIONS " << endl;
    cout << "2. CALCULATIONS" << endl;
    cout << "3. DISPLAY " << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return VOL(choice);
}

int main()
{
    int result;
    Volume v;
    VOL choice;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case PASS_DIMENSIONS:
            Volume v(10, 10, 10);
            break;

        case CALCULATION:
            result = v.calculateDimensions();

        case DISPLAY :
            v.displayVolume();    
        }

    }

    return 0 ;
}