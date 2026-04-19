#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0.0;
    }

    int askChoice()
    {
        int choice = 0;

        while (choice != 4)
        {
            cout << "\n";
            cout << "1. Withdraw." << endl;
            cout << "2. Deposit." << endl;
            cout << "3. Bank Balance." << endl;
            cout << "4. Exit." << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            while (choice > 4 || choice <= 0)
            {

                cout << "Invalid choice! Enter a valid choice:";
                cin >> choice;
            }

            switch (choice)
            {
            case 1: withdraw(); break;
            case 2: deposit(); break;
            case 3: checkBalance(); break;
            case 4: return 0; break;
            default: break;
            }
        }
    }

    int withdraw()
    {
        int amount;

        cout << "Enter the amount to withdraw: ";
        cin >> amount;

        if (amount < 0)
        {
            cout << "Invalid amount!";
            return 0;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance";
        }

        balance = balance - amount;

        cout << amount << " withdraw successful!" << endl;
    }

    int deposit()
    {
        int deposit;

        cout << "Enter the amount to deposit: ";
        cin >> deposit;

        if (deposit < 0)
        {
            cout << "Invalid amount!";
            return 0;
        }

        balance = balance + deposit;

        cout << deposit << " Deposited to your account!" << endl;
    }

    void checkBalance()
    {
        cout << "Your Bank Balance is: " << balance << endl;
    }
};

int main()
{
    BankAccount A1;

    A1.askChoice();

    return 0;
}