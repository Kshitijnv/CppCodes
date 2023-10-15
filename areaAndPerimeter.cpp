//It is a simple menu-driven program that computes the area and circumference of a circle, the area and perimeter of a rectangle based on the user's choice. 
#include <iostream>
#include <cmath>
using namespace std;
void areaCircum(double r, double &a, double &c);
void areaPeri(double len, double bre, double &area, double &perimeter);
int main()
{
    int choice;
    do
    {
        cout << "Shape Selection \nEnter your choice" << endl;
        cout << "1) Circle \n2) Rectangle \n3) Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double radii, area, circum;
            cout << "Enter radius of a circle = ";
            cin >> radii;
            areaCircum(radii, area, circum);
            cout << "Area of circle : " << area << endl;
            cout << "Circumference of circle : " << circum << endl;
        }
        break;
        case 2:
        {
            double len, bre, area, perimeter;
            cout << "Enter length of a rectangle = ";
            cin >> len;
            cout << "Enter breadth of a rectangle = ";
            cin >> bre;
            areaPeri(len, bre, area, perimeter);
            cout << "Area of rectangle : " << area << endl;
            cout << "Perimeter of rectangle : " << perimeter << endl;
        }
        break;
        case 3:
            break;
        default:
            cout << "INVALID INPUT \nENTER VALID INPUT" << endl;
        }
    } while (choice != 3);
    return 0;
}
void areaCircum(double r, double &a, double &c)
{
    a = M_PI * pow(r, 2);
    c = 2 * M_PI * r;
}
void areaPeri(double len, double bre, double &area, double &perimeter)
{
    area = len * bre;
    perimeter = 2 * (len + bre);
}