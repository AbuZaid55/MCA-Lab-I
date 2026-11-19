
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    // To assign initial values
    void initialize(string n, int accNo, string type, double amount)
    {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = amount;
    }

    // To deposit an amount
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // To withdraw an amount after checking balance
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    // To display account details
    void display()
    {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Type: " << accountType;
        cout << "\nBalance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    account.initialize("Rahul", 12345, "Savings", 5000);

    account.display();

    account.deposit(2000);
    
    account.display();
    
    account.withdraw(1500);

    account.display();

    return 0;
}

