#include <iostream>
#include <string>

using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pincode;

public:
    Address()
    {
        this->building = " 63 ";
        this->street = " Godhani road";
        this->city = "Nagpur";
        this->pincode = 440030;
    }

    Address(string building, string street, string city, int pincode)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pincode = pincode;
    }

    void accept()
    {
        cout << " ENTER BUILDING NUMBER " << endl;
        cin >> this->building;

        cout << " ENTER street " << endl;
        cin >> this->street;

        cout << " ENTER city " << endl;
        cin >> this->city;

        cout << " ENTER pincode " << endl;
        cin >> this->pincode;
    }

    void display()
    {   
        cout << "---------------------------------------------" << endl ;
        cout << " Address : " << endl;
        cout << " building no  : " << this->building << endl;
        cout << " street  : " << this->street << endl;
        cout << " pincode : " << this->pincode << endl;
    }

    string get_building()
    {
        return this->building;
    }

    string get_street()
    {
        return this->street;
    }
    string get_city()
    {
        return this->city;
    }

    int get_pincode()
    {
        return this->pincode;
    }

    void setpincode(int pincode)
    {
        this->pincode = pincode;
    }

    void setbuilding(string building)
    {
        this->building = building;
    }

    void setstreet(string street)
    {
        this->street = street;
    }
    void setcity(string city)
    {
        this->city = city;
    }
};

int main()
{
    Address a1, a2;

    a1.accept();
    a1.display();

    a2.setbuilding("SUNBEAM");
    a2.setcity("KARAD");
    a2.setpincode(440015);
    a2.setstreet("karad road ");
    cout << "------------------------------" << endl;
    cout << a2.get_building() << endl;
    cout << a2.get_city() << endl;
    cout << a2.get_pincode() << endl;

    cout << a2.get_street() << endl;
    cout << endl;

    return 0;
}
