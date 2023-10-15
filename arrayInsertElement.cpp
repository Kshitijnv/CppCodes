// It is designed to insert an element into an array based on user input. 
// It first initializes an array, allows the user to input elements, and then prompts the user for the index position 
//  the value of the element to be inserted.
#include <iostream>
using namespace std;

int main()
{
    int size, pos, val;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int arr[size + 1];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Given Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "\nEnter the index position to insert the element: ";
    cin >> pos;
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position to insert." << endl;
        return 1;
    }
    cout << "Enter the element: ";
    cin >> val;
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;
    cout << "\nNew Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}
