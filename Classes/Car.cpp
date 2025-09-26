#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string Company;
    string Model;
    int speed;

public:
    Car()
    {
        cout << "I am in Base Class" << endl;
        this->Company = "Random";
        this->Model = "Random";
        this->speed = 0;
    }
    Car(string Company, string Model)
    {
        this->Company = Company;
        this->Model = Model;
        this->speed = 0;
    }
    void incSpeed(int s)
    {
        this->speed += s;
    }
    void decSpeed(int s)
    {
        this->speed -= s;
    }
    void display()
    {
        cout << "Company: " << Company << endl;
        cout << "Model: " << Model << endl;
        cout << "Speed: " << speed << endl;
    }
    virtual ~Car() = 0;
};
Car::~Car()
{
    cout << "Base class deleted" << endl;
}

class Bike : public Car
{
private:
    string tyreBrand;

public:
    Bike()
    {
        cout << "I am in Derived Class" << endl;
    }
    Bike(string tyreBrand)
    {
        this->tyreBrand = tyreBrand;
    }
    void display()
    {
        Car::display();
        cout << "Tyre Brand of my Bike is " << tyreBrand << endl;
    }
    void startBike()
    {
        cout << "Bike Started" << endl;
    }
    ~Bike()
    {
        cout << "Derived class deleted" << endl;
    }
};
int main()
{
    // Car A("Toyota", "Corolla");
    // Bike b1("MRF");
    // Car *b2 = new Bike("Goodyear");
    // b2->display();
    // b1.display();
    Bike b1;
}
