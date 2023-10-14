#include <iostream>
// This code defines a function called StrCpy that performs a simple string copy operation.
void StrCpy(char dest[], char src[]) {
    char* destPtr = dest;
    const char* srcPtr = src;
    
    while (*srcPtr != '\0') {
        *destPtr = *srcPtr;
        destPtr++;
        srcPtr++;
    }

    *destPtr = '\0';
}

int main() {
    char source[] = "CDAC, Pune";
    char destination[50]; 
    StrCpy(destination, source);
    
    std::cout << "Source string: " << source << std::endl;
    std::cout << "Copied string: " << destination << std::endl;
    return 0;
}
