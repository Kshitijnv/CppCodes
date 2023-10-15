//It is designed to find the maximum of two numbers and return the address of the maximum value
#include <iostream>
using namespace std;
int *max(int num1, int num2, int &maximum);
int main()
{
    int num1, num2, maximum, *maxaddr;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    maxaddr = max(num1, num2, maximum);
    cout << "Maximum number is : " << maximum << endl;
    cout << "Address of maximum number is : " << maxaddr;
    return 0;
}
int *max(int num1, int num2, int &maximum)
{
    if (num1 > num2)
        maximum = num1;
    else
        maximum = num2;
    return &maximum;
}