// Encapsulation is one of the four foundational principles of object-oriented design. It is the practice of grouping data (variables) and behavior (methods) that operate on that data into a single unit (typically a class) and restricting direct access to the internal details of that class.

// It helps you build systems that are robust, secure, and easy to maintain. Here's why it's essential:

// Data Hiding: By restricting direct access to internal fields, encapsulation shields sensitive data from unintended interference or misuse.
// Controlled Access and Security: : It ensures that data can only be accessed or modified through well-defined methods, allowing you to enforce rules, validation, or logging when needed.
// Improved Maintainability: Because internal implementation details are hidden, you can refactor or optimize them without affecting the external code that depends on the class

#include<bits/stdc++.h>
using namespace std;


class BankAccount{
    private:
        static int nextAccountNum;
        string name;
        double balance;
        int accountnumber;
    public:
        BankAccount(string name){
            this->name = name;
            balance = 0.0;
            accountnumber = ++nextAccountNum;
        }
        double getBalance(){
            return balance; 
        }
        void deposit(double amount){
            if(amount <= 0){
                throw invalid_argument("Amount should be more than 0");
            }
            balance += amount;
        }
        void withdraw(double amount){
            if(amount <= 0){
                throw invalid_argument("Amount should be more than 0");
            }
            if(balance < amount){
                throw invalid_argument("Insufficient Funds");
            }
            balance -= amount;
        }
        void getDetails(){
            cout<<"Account Holder Name: "<<name<<endl;
            cout<<"Account Number: "<<accountnumber<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int BankAccount::nextAccountNum = 1000;

int main(){
    vector<BankAccount> holders;
    for(int i = 0;i<5;i++){
        string name;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        BankAccount b1(name);
        holders.push_back(b1);
    }
    for(auto &acc:holders){
        acc.deposit(100.0);
    }
    holders[2].withdraw(35.0);
    holders[2].getDetails();
}