#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor" << endl;
    }
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};

int main()
{
    // Base *base = new Base();
    // base->display();
    // Derived *der = new Derived();
    // Base *b = new Derived();
    // b->display();
    Base *b = new Derived();
    b->display();
}