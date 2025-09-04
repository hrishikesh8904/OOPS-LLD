#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string Company;
    string Model;
    int speed;

public:
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
};

int main()
{
    Car A("Toyota", "Corolla");
    Car B("Tata", "Punch");
    A.incSpeed(15);
    A.decSpeed(3);
    B.incSpeed(100);
    B.decSpeed(10);
    A.display();
    B.display();
}