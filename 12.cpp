#include <iostream>

int main() {
    int num, digit,count = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    std::cout << "Enter the digit to count: ";
    std::cin >> digit;

    while (num > 0) {
        int lastDigit = num % 10; 
        if (lastDigit == digit) {
            count++;
        }
        num= num/ 10; 
            
    }
    std::cout << "Count of digit " << digit << " in the number is: " << count << std::endl;

    return 0;
}
