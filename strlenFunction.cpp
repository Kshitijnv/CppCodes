#include <iostream>
// This code defines a function called Strlen that calculates the length of a given string
int Strlen(char s[]) {
    char* ptr = s;
    int count=0;
    while (*ptr != '\0') {
        ptr++;
        count++;
    }
    return count;
}

int main() {
    char myString[] = "Hello, World!";
    int length = Strlen(myString);
    
    std::cout << "String length using pointer operations: " << length << std::endl;
    
    return 0;
}
