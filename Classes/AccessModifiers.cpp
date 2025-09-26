#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int publicint;

protected:
    int protectedint;

private:
    int privateint;

public:
    A()
    {
        cout << "Base class constructor called" << endl;
        publicint = 0;
        protectedint = 1;
        privateint = 2;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B class constructor called" << endl;
    }
    int getProtected()
    {
        return protectedint;
    }
};
class C : protected A
{
public:
    C()
    {
        cout << "C class constructor called" << endl;
    }
    int getProtected()
    {
        return protectedint;
    }
};

class D : private A
{
};

int main()
{
    B b1;
    cout << b1.getProtected() << endl;
    C c1;
    cout << c1.getProtected();
}
