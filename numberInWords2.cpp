#include <iostream>

void printWords(int num) {
    if (num >= 10000000) {
        printWords(num / 10000000);
        std::cout << "Crore ";
        num %= 10000000;
    }

    if (num >= 100000) {
        printWords(num / 100000);
        std::cout << "Lakh ";
        num %= 100000;
    }

    if (num >= 1000) {
        printWords(num / 1000);
        std::cout << "Thousand ";
        num %= 1000;
    }

    if (num >= 100) {
        printWords(num / 100);
        std::cout << "Hundred ";
        num %= 100;
    }

    if (num > 0) {
        if (num >= 20) {
            const char* tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
            std::cout << tens[num / 10] << " ";
            num %= 10;
        } else if (num >= 11) {
            const char* teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
            std::cout << teens[num - 10] << " ";
            num = 0;
        }

        if (num > 0) {
            const char* ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
            std::cout << ones[num] << " ";
        }
    }
}

int main() {
    int num;
    
    // Input a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "Zero" << std::endl;
    } else if (num < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        std::cout << "Result: ";
        printWords(num);
        std::cout << std::endl;
    }

    return 0;
}
