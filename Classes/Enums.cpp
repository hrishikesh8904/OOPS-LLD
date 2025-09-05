// An enum is a special data type that defines a collection of constant values under a single name. Unlike primitive constants or string literals, enums are type-safe, you can’t assign just any value to a variable declared as an enum type.

#include <bits/stdc++.h>
using namespace std;

enum class OrderState
{
    PLACED,
    PENDING,
    CONFIRMED,
    SHIPPING,
    DELIVERED
};
string to_string(OrderState st)
{
    switch (st)
    {
    case OrderState::PLACED:
        return "Placed";
    case OrderState::PENDING:
        return "Pending";
    case OrderState::CONFIRMED:
        return "Confirmed";
    case OrderState::SHIPPING:
        return "Shipping";
    case OrderState::DELIVERED:
        return "Delivered";
    }
    return "UNKNOWN";
}
class Order
{
private:
    static int currentid;
    int orderid;
    vector<string> OrderDetails;
    OrderState st;

public:
    Order(vector<string> OrderDetails, OrderState st)
    {
        this->orderid = ++currentid;
        this->OrderDetails = OrderDetails;
        this->st = st;
    }
    void viewOrderDetails()
    {
        cout << "OrderID: " << orderid << endl;
        cout << "Order Details: " << endl;
        for (string a : OrderDetails)
        {
            cout << a << endl;
        }
        cout << "Status: " << to_string(st) << endl;
    }
};
int Order::currentid = 0;
int main()
{
    vector<string> OrderD = {"Pizza", "Cold Coffee"};

    Order o1(OrderD, OrderState::PLACED);
    Order o2(OrderD, OrderState::PLACED);
    o1.viewOrderDetails();
    o2.viewOrderDetails();
}