// PROGRAM1                 //do not remove this comment line

// Mid Term Test SECJ1013 2425-1  MOCK TEST 2

// Student's name:HARITZ HAYKAL BIN NAZRUL HISHAM_ Matric Number:__A24CS0250___________________
#include <iostream> // no initializer
using namespace std;

#define USD_MYR_RATE 4.69 // ;

double exchange(double rate, double usd)
{ // no; and no rate,usd declaration

    return rate * usd;
}

int main()
{

    double usd, myr;
    char again = 'Y'; // const

    do
    {
        cout << "Enter the amount money you have in USD =>";
        cin >> usd; // wrong arrow

        if (usd >= 500 && usd <= 1000) // didnt use &&
        {

            myr = exchange(USD_MYR_RATE, usd);

            cout << "Your money in MYR :" << myr << endl; // wrong arrow
        }
        else // else
        {
            cout << "We are unable to exchange your money" << endl;
        }

        cout << endl;
        cout << "Do you want to start over? =>";
        cin >> again;
        cout << endl;

    } while (again == 'Y'); // =
    cout << "Thank you! Have a nice day";

    cout << endl;
    system("pause");
    return 0;
}
