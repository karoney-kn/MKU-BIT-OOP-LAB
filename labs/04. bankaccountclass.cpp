#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int acno;       // Fixed variable name (was "a cno")
    float balance;
    string actype;  // Changed from char[4] to string for better handling
public:
    void store();
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::store()
{
    cout << "Enter account number:" << endl;
    cin >> acno;
    cout << "Enter the account type (CURR/SAVG/FD):" << endl;
    cin >> actype;
    cout << "Enter the current amount available:" << endl;
    cin >> balance;
}

void BankAccount::deposit()
{
    float more;
    cout << "Enter the amount to deposit: ";
    cin >> more;
    balance += more;
    //cout << "Deposit successful. New balance: Ksh." << balance << endl;
}

void BankAccount::withdraw()
{
    float amt;
    cout << "Enter the amount to withdraw:" << endl;
    cin >> amt;
    balance -= amt;
    /*
    if (amt <= balance) {
        balance -= amt;
        cout << "Withdrawal successful. New balance: Ksh." << balance << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
    */
}

void BankAccount::display()
{
    cout << "\nAccount Details:" << endl;
    cout << "Account Number: " << acno << endl;
    cout << "Account Type: " << actype << endl;
    cout << "Balance: Ksh." << balance << endl;
}

int main()
{
    BankAccount b;  
    b.store();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}