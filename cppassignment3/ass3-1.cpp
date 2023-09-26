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
        return this->length * this->breadth * this->height;
    }

    Volume(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void displayVolume()
    {
        int volume = length * breadth * height;
        cout << "--------------------------------------------------" << endl;
        cout << "volume of cube " << volume << endl;
    }

    void setLength(int length)
    {
        this->length = length;
    }

    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }

    void setHeight(int height)
    {
        this->height = height;
    }
};

enum VOL
{
    EXIT = 0,
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
            cout << "values assigned " << endl ;
            v.setLength(10);
            v.setBreadth(10);
            v.setHeight(10);
            break;

        case CALCULATION:
            
            result = v.calculateDimensions();
            cout << result << endl;
            break;

        case DISPLAY:
            v.displayVolume();
            break;
        }
    }

    return 0;
}