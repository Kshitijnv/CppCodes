#include <iostream>
// This code defines a function called Compare that checks whether two strings are identical.
bool Compare(char s1[], char s2[]) {
    char* ptr1 = s1;
    char* ptr2 = s2;

    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 != *ptr2) {
            return false; 
        }
        ptr1++;
        ptr2++;
    }

    return (*ptr1 == '\0' && *ptr2 == '\0');
}

int main() {
    char string1[] = "Hello";
    char string2[] = "Hello";

    bool result = Compare(string1, string2);

    if (result) {
        std::cout << "The two strings are the same." << std::endl;
    } else {
        std::cout << "The two strings are different." << std::endl;
    }

    return 0;
}
