#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string BookTitle;
    string AuthorName;
    bool Availability;

public:

    Book(string name, string author){
        BookTitle = name;
        AuthorName = author;
        Availability = true;
    }

    void displayInfo()
    {
        cout << "\nTitle: " << BookTitle << endl;
        cout << "Author: " << AuthorName << endl;
        if (Availability == true)
        {
            cout << "Status: Available " << endl;
        }
        else
        {
            cout << "Status: Borrowed" << endl;
        }
    }

    void choice()
    {

        int choice = 0;
        do
        {
            displayInfo();
            cout << "\n1.Borrow Book. \n2.Return Book. \n3.Book Info. \n4.Exit" << endl;
            cout << "\nEnter your choice: ";
            cin >> choice;

            while (choice > 4 || choice <= 0)
            {
                cout << "Invalid choice! Enter your choice:  ";
                cin >> choice;
            }

            switch (choice)
            {
            case 1:
                borrowBook();
                break;
            case 2:
                returnBook();
                break;
            case 3:
                bookInfo();
                break;
            case 4:
                return;
                break;
            default:
                break;
            }

        } while (choice != 4);
    }

    int borrowBook()
    {
        string name;
        string email;
        if (Availability != false)
        {
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your Email: ";
            cin >> email;

            Availability = false;

            cout << "\nBook is borrowed!!" << endl;
            cout << "Name: " << name << endl;
            cout << "Email Id: " << email << endl;
        }
        else
        {
            cout << "\nBook is not Available!" << endl;
        }

        return Availability;
    }

    int returnBook()
    {
        if (Availability == false)
        {
            cout << BookTitle << "is Returned Back!" << endl;
            Availability = true;
        }
        else
        {
            cout << "\nBook is Already Returned\n";
        }
        return Availability;
    }

    void bookInfo()
    {
        cout << "\nBook Name:" << BookTitle << endl;
        cout << "Book Author:" << AuthorName << endl;

        if(Availability == false){
            cout << "Book is Borrowed" << endl;
        } 
        else {
            cout << "Book is Available" << endl;
        }
    }
};

int main()
{
    Book B1("The Alchemist", "Paulo Coelho");
    B1.choice();

    return 0;
}