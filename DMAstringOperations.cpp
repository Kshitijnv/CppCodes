// It is designed to take five strings as input from the user, sort them in lexicographical order, and then print them
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *strings[5];
    for (int i = 0; i < 5; i++)
    {
        char inputString[100]; // variable for user input string array max 99 characters
        cout << "Enter " << i + 1 << " string : ";
        cin.getline(inputString, sizeof(inputString));  // storing the user input string
        strings[i] = new char[strlen(inputString) + 1]; // allocating memory for the user input string
        strcpy(strings[i], inputString);                // copy the user input string into the memory block
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << strings[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        delete[] strings[i];
    }
    return 0;
}