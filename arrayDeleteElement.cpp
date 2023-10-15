#include <iostream>
using namespace std;

int main()
{
    int size, del;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid array size. Exiting program." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Given Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    int choice;

    do
    {
        cout << "To delete an element, press 1\nTo exit, press 2: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the index position of the element to delete: ";
            cin >> del;

            if (del < 0 || del >= size)
                cout << "Invalid index position." << endl;
            else
            {
                for (int i = del; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
                if (size == 0)
                {
                    cout << "Array is empty." << endl;
                    exit(0);
                }
                else
                {
                    cout << "New Array:" << endl;
                    for (int i = 0; i < size; i++)
                    {
                        cout << arr[i] << "\t";
                    }
                    cout << endl;
                }
            }
        }
        else if (choice == 2)
        {
            cout << "Exiting the program." << endl;
        }
        else
            cout << "INVALID INPUT" << endl;

    } while (choice != 2);

    return 0;
}
