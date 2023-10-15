//It is designed to take in a date, month, and year from the user and then display the entered date in the specified format
#include <iostream>
using namespace std;
void getDate(int &d, int &m, int &y);
int main()
{
    int date, month, year;
    getDate(date, month, year);
    cout << "Date is : " << date << "/" << month << "/" << year;
    return 0;
}
void getDate(int &d, int &m, int &y)
{
    cout << "Enter a date : ";
    cin >> d;
    cout << "Enter a month : ";
    cin >> m;
    cout << "Enter a year : ";
    cin >> y;
}