#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string customerName;
    float bankBalance;
    int PIN;
    bool isLocked;

public:
    BankAccount(string name, float balance, int pin)
    {
        customerName = name;
        bankBalance = balance;
        PIN = pin;
        isLocked = false;
    }

    void enterPIN()
    {
        int attempts = 3;
        int pin;
        bool loggedIn = false;

        cout << "Welcome to the ATM!" << endl;

        while (attempts > 0)
        {
            cout << "Enter your PIN: ";
            cin >> pin;

            if (pin == PIN)
            {
                loggedIn = true;
                cout << "Login successful! Welcome, " << customerName << "!" << endl;
                askChoice();
                return;
            }
            else
            {
                attempts--;
                if (attempts == 0)
                {
                    isLocked = true;
                    cout << "Account Locked! Contact your bank!" << endl;
                }
                else
                {
                    cout << "Incorrect PIN! " << attempts << " attempts remaining." << endl;
                }
            }
        }
    }

    void askChoice()
    {
        int choice = 0;

        if (isLocked != true)
        {
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
                case 1:
                    withdraw();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    checkBalance();
                    break;
                case 4:
                    return;
                    break;
                default:
                    break;
                }
            }
        }
        else
        {
            return;
        }
    }

    void withdraw()
    {
        int amount;

        cout << "Enter the amount to withdraw: ";
        cin >> amount;

        if (amount < 0)
        {
            cout << "Invalid amount!";
            return;
        }
        else if (amount > bankBalance)
        {
            cout << "Insufficient balance";
            return;
        }

        bankBalance = bankBalance - amount;

        cout << amount << " withdraw successful!" << endl;
    }

    void deposit()
    {
        int deposit;

        cout << "Enter the amount to deposit: ";
        cin >> deposit;

        if (deposit < 0)
        {
            cout << "Invalid amount!";
            return;
        }

        bankBalance = bankBalance + deposit;

        cout << deposit << " Deposited to your account!" << endl;
    }

    void checkBalance()
    {
        cout << "Your Bank Balance is: " << bankBalance << endl;
    }
};

int main()
{
    BankAccount A1("Fardeen", 0.0, 1234);
    A1.enterPIN();

    return 0;
}