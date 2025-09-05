// At its core, an interface defines a contract: a set of method signatures that any implementing class must fulfill. It declares what a class can do, but not how it does it.

// Consider a remote control. It exposes a standard set of buttons:

// play()
// pause()
// volumeUp()
// powerOff()
// The person using the remote doesn’t care whether it controls a TV, a soundbar, or a projector. The interface remains the same, but the underlying device behaves differently.

// This is exactly how interfaces work in software design.


// An interface specifies what operations are expected, but not how they are carried out. This gives freedom to implementers to provide customized logic while still honoring the contract.

// Enables polymorphism
// Different classes can implement the same interface in different ways. This allows your code to work with different implementations interchangeably.

// Promotes decoupling
// Code that depends on interfaces is insulated from changes in concrete implementations. This reduces the ripple effect of changes and increases testability and maintainability.
#include<bits/stdc++.h>
using namespace std;

class PaymentGateway{
    protected:
        PaymentGateway(){
            cout<<"Initiating Payment"<<endl;
        }
    public:
        virtual void initiatePayment(double amount) = 0;
};

class stripePayment: public PaymentGateway{
    public:
        stripePayment(){
            cout<<"Initialising Payment via stripe"<<endl;
        }
        void initiatePayment(double amount){
                cout<<"Transferring "<<amount<<" via Stripe"<<endl;
        }
};

class paytmPayment: public PaymentGateway{
    public:
        paytmPayment(){
            cout<<"Initialising payment via Paytm"<<endl;
        }
        void initiatePayment(double amount){
            cout<<"Transferring "<<amount<<" via Paytm"<<endl;
        }
};

class checkOut{
    private:
        PaymentGateway *p;
    public:
        checkOut(){
            cout<<"Proceeding to Checkout"<<endl;
        }
        void setPaymentGateway(PaymentGateway *p){
            this->p = p;
        }
        void proceedToCheckOut(){
            p->initiatePayment();
        }
};

int main(){
    double amount;
    cout<<"Enter amount to pay: "<<endl;
    cin>>amount;
    cout<<k
}