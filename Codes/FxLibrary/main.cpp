#include <iostream>
using namespace std;

double calculateLateFees(int days)
{

    float price = 0;
    if (days <= 7)
        price = 0.50 * days;
    else if (days > 7 && days <= 14)
        price = (0.50 * 7) + (1.00 * (days - 7));
    else if (days > 14)
        price = (0.50 * 7) + (1.00 * 7) + (2.00 * (days - 14));

    return price;
}

void displayMenu()
{
    cout << "1. Calculate Late Fees" << endl;
    cout << "2. Display Library Information" << endl;
    cout << "3. Quit" << endl;
}

void displayLibraryInfo()
{
    cout << "Library name : PSZ" << endl;
    cout << "Adress : UTM KL" << endl;
    cout << "Contact Details : +601151450924" << endl;
}

int getUserInput(int &days)
{
    cout << "Enter the number of days the book is overdue: ";
    cin >> days;
    if (days <= 0)
        cout << "Invalid input. Please enter a valid number.";
    else
    {
        return days;
    }
}

int main()
{

    double price;
    int days = 0, input;
    int exitreq = 0;
    do
    {

        cout << "********** Library Book Checkout System***********" << endl;
        displayMenu();

        cout << "Enter your choice (1-3) : ";
        cin >> input;

        switch (input)
        {

        case 1:
            getUserInput(days);
            price = calculateLateFees(days);

            cout << "Late fees: RM" << price << endl;
            break;

        case 2:
            displayLibraryInfo();
            break;

        case 3:
            cout << "Exiting the program. Thank you!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }
        exitreq = input;
    } while (exitreq != 3);

    void displayMenu();
    double calculateLateFees(int);
    void displayLibraryInfo();
    int getUserInput(int);

    return 0;
}
