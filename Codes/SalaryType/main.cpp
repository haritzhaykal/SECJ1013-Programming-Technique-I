#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    string name;
    int number;
    char code;
    double income;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your employee number: ";
    cin >> number;
    cout << "G - fixed paid employees" << endl;
    cout << "K - contract workers" << endl;
    cout << "S - subcontract workers" << endl;
    cout << "Please enter the code for the type of employee you are: ";
    cin >> code;

    if (code == 'G')
    {
        char manager;
        double fixed_salary;
        cout << "Are you a manager or not? (y/n): ";
        cin >> manager;

        while (manager != 'y' && manager != 'n')
        {
            cout << "\nAre you a manager or not? (y/n): ";
            cin >> manager;
        }

        if (manager == 'y')
        {
            cout << "What is your fixed salary? ";
            cin >> fixed_salary;
            income = fixed_salary;
        }
        else if (manager == 'n')
        {
            int ot;
            double overtime_salary = 0.0;
            cout << "What is your fixed salary? ";
            cin >> fixed_salary;
            cout << "How many hours did you work overtime? ";
            cin >> ot;

            if (ot <= 10)
            {
                overtime_salary = ot * 15;
            }
            else if (ot > 10 && ot <= 20)
            {
                overtime_salary = (10 * 15) + ((ot - 10) * 12);
            }
            else
            {
                cout << "Invalid overtime hours." << endl;
                return 0;
            }
            income = fixed_salary + overtime_salary;
        }
        else
        {
            cout << "Invalid manager input." << endl;
            return 0;
        }
    }
    else if (code == 'K')
    {
        string status;
        int hour, pay = 0;

        cout << "Which part of work do you do? (recovery/maintenance): ";
        cin >> status;

        if (status == "recovery")
        {
            cout << "How many hours do you work? ";
            cin >> hour;
            if (hour > 0 && hour <= 100)
            {
                pay = hour * 20;
                income = pay;
            }
            else
            {
                cout << "Invalid hours." << endl;
                return 0;
            }
        }
        else if (status == "maintenance")
        {
            cout << "How many hours do you work? ";
            cin >> hour;
            if (hour <= 50)
            {
                pay = hour * 10;
            }
            else if (hour > 50 && hour <= 100)
            {
                pay = (50 * 10) + ((hour - 50) * 5);
            }
            else
            {
                cout << "Invalid hours." << endl;
                return 0;
            }
            income = pay;
        }
        else
        {
            cout << "Invalid work status." << endl;
            return 0;
        }
    }
    else if (code == 'S')
    {
        int big_toy, medium_toy, small_toy;

        cout << "How many big toys, medium toys, and small toys have you sold? ";
        cin >> big_toy >> medium_toy >> small_toy;

        if (big_toy < 0 || medium_toy < 0 || small_toy < 0)
        {
            cout << "Invalid toy count." << endl;
            return 0;
        }
        income = (big_toy * 8) + (medium_toy * 5) + (small_toy * 2);
    }
    else
    {
        cout << "Invalid employee type code." << endl;
        return 0;
    }

    cout << "Employee's name:" << name << endl;
    cout << "Employee's number: " << number << endl;
    cout << "Employee's income: " << fixed << setprecision(2) << income << endl;

    return 0;
}