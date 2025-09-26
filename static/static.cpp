#include <bits/stdc++.h>
using namespace std;

// static int counti;
// void func()
// {
//     counti++;
//     cout << counti << endl;
// }

class A
{
public:
    static int a;
    A()
    {
        a++;
        cout << "Inside Constructor" << endl;
    }
};
int A::a = 10;
int main()
{
    A a1;
    A a2;
    cout << a1.a << " " << a2.a;
}