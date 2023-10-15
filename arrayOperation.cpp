// It is designed to perform several operations on an array of five numbers.
// The operations include finding the maximum and minimum numbers in the array, and then multiplying each element of the array by 5
#include <iostream>
using namespace std;
void max(int arr[]);
void min(int arr[]);
void mulArray(int arr[]);

int main()
{
    int arr[5];
    cout << "Enter five numbers : ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    max(arr);
    min(arr);
    mulArray(arr);
    return 0;
}

void max(int arr[])
{
    int maximum = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maximum)
            maximum = arr[i];
    }
    cout << "Maximum number is : " << maximum << endl;
}

void min(int arr[])
{
    int minimum = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];
    }
    cout << "Minimum number is : " << minimum << endl;
}

void mulArray(int arr[])
{
    cout << "Given Array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] *= 5;
    }
    cout << "\nNew Array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}