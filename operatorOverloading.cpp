#include <iostream>
// the implementation of BigInt class by overloading relational operators to compare two BigInt objects.
class BigInt {
    int num;

public:
    BigInt() : num(0) {}
    BigInt(int n) : num(n) {}

    void Read() {
        std::cin >> num;
    }

    void Write() {
        std::cout << num;
    }

    bool operator==(const BigInt& obj2) const {
        return num == obj2.num;
    }

    bool operator<(const BigInt& obj2) const {
        return num < obj2.num;
    }

    bool operator<=(const BigInt& obj2) const {
        return num <= obj2.num;
    }

    bool operator>(const BigInt& obj2) const {
        return num > obj2.num;
    }

    bool operator>=(const BigInt& obj2) const {
        return num >= obj2.num;
    }
};

int main() {
    BigInt i(10);
    BigInt j(20);

    if (i == j) {
        std::cout << "They are equal\n";
    } else {
        std::cout << "They are NOT equal\n";
    }

    if (i < j) {
        std::cout << "i is less than j\n";
    }

    if (i <= j) {
        std::cout << "i is less than or equal to j\n";
    }

    if (i > j) {
        std::cout << "i is greater than j\n";
    }

    if (i >= j) {
        std::cout << "i is greater than or equal to j\n";
    }

    return 0;
}
