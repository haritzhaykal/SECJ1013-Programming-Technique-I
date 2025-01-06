#include <iostream>
using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

double getLength(double length)
{

    cout << "Enter the length of the rectangle : ";
    cin >> length;

    return length;
}

double getWidth(double width)
{

    cout << "Enter the width of the rectangle : ";
    cin >> width;

    return width;
}

double getArea(double lngth, double wdth)
{

    double area;

    area = lngth * wdth;

    return area;
}

void displayData(double l, double w, double a)
{

    cout << "Length of the rectangle is " << l << endl;
    cout << "Width of the rectangle is " << w << endl;
    cout << "Area of the rectangle is " << a << endl;
}

int main()
{

    double leng, wid, aea;

    leng = getLength(leng);
    wid = getWidth(wid);
    aea = getArea(leng, wid);

    displayData(leng, wid, aea);

    return 0;
}