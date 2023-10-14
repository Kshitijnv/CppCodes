#include <iostream>
#include<limits>
int main() {
    int num, digit, count = 0;
    while (true) {
        std::cout << "Enter a positive integer: ";
        if (std::cin >> num && num >= 0) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        }
    }

  
    while (true) {
        std::cout << "Enter a single digit (0-9): ";
        if (std::cin >> digit && digit >= 0 && digit <= 9) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a single digit (0-9)." << std::endl;
        }
    }
    int originalNum = num;
    while (num > 0) {
        int lastDigit = num % 10;
        if (lastDigit == digit) {
            count++;
        }
        num = num / 10;
    }
    std::cout << "Count of digit " << digit << " in the number " << originalNum << " is: " << count << std::endl;
    return 0;
}
