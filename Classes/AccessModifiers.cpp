// What are Access Specifiers / Modifiers

// Access specifiers are keywords you use inside classes (or structs) to control visibility / accessibility of members (data members, member functions), nested types, etc.

// They help enforce encapsulation (hiding implementation details), data hiding, and to manage what derived classes get access to vs what outside code gets to see.

// Inheritance + Access Specifiers

// Access specifiers also interact with modes of inheritance (public, protected, private inheritance), which affect how base class’s public/protected members behave in derived classes. This is a common area of interview questions.

// Other Rules and Special Cases

// To be interview-strong, you should know these subtleties:

// Friends

// A class can declare another function or class as a friend, so that friend has access to its private & protected members.

// Friend-ship is not inherited. If you make class A friend of B, derived classes of B do not automatically make A a friend of the derived.
#include <bits/stdc++.h>
using namespace std;

class Base
{
private:
    int priv = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    int getPriv() const { return priv; }
};

class PublicDerived : public Base
{
public:
    void test()
    {
        // priv = 10;        // ERROR: priv is private in Base
        prot = 20; // OK
        pub = 30;  // OK
        cout << "PublicDerived sees prot = " << prot << "\n";
    }
};

class ProtectedDerived : protected Base
{
public:
    void test()
    {
        prot = 100; // OK (protected still accessible)
        pub = 200;  // OK (but becomes protected in derived due to protected inheritance)
    }
};

class PrivateDerived : private Base
{
public:
    void test()
    {
        prot = 1000; // OK (protected of base becomes private in derived)
        pub = 2000;  // OK (public of base becomes private in derived)
    }
};

int main()
{
    Base b;
    PublicDerived pd;
    ProtectedDerived prd;
    PrivateDerived pvd;

    cout << b.pub << "\n"; // OK: public
    // cout << b.prot;            // ERROR: protected
    // cout << b.priv;            // ERROR: private

    pd.test();
    // pd.pub = 50;               // OK: because public (unchanged in public inheritance)
    // prd.pub = 60;              // ERROR: pub became protected in ProtectedDerived, so outside cannot access
    // pvd.pub = 70;              // ERROR: pub became private in PrivateDerived
    return 0;
}

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
