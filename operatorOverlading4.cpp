#include <iostream>
#include <cstdlib>

class BigInt {
private:
    int num;

public:
    BigInt() : num(0) {}
    BigInt(int n) : num(n) {}


    BigInt& operator++() {
        num++;
        return *this;
    }

    BigInt operator++(int) {
        BigInt temp(*this);
        num++;
        return temp;
    }

    BigInt& operator--() {
        num--;
        return *this;
    }

    BigInt operator--(int) {
        BigInt temp(*this);
        num--;
        return temp;
    }

    BigInt operator+(const BigInt& obj2) const {
        return BigInt(num + obj2.num);
    }

    BigInt operator-(const BigInt& obj2) const {
        return BigInt(num - obj2.num);
    }

    BigInt operator*(const BigInt& obj2) const {
        return BigInt(num * obj2.num);
    }

    BigInt operator/(const BigInt& obj2) const {
        if (obj2.num == 0) {
            std::cerr << "Error: Division by zero.\n";
            exit(1);
        }
        return BigInt(num / obj2.num);
    }

    BigInt operator+(int value) const {
        return BigInt(num + value);
    }

    BigInt operator-(int value) const {
        return BigInt(num - value);
    }

    BigInt operator*(int value) const {
        return BigInt(num * value);
    }

    BigInt operator/(int value) const {
        if (value == 0) {
            std::cerr << "Error: Division by zero.\n";
            exit(1);
        }
        return BigInt(num / value);
    }

    void Read() {
        std::cin >> num;
    }

    void Write() const {
        std::cout << num;
    }

    bool operator==(const BigInt& obj2) const {
        return num == obj2.num;
    }
};

int main() {
    BigInt a(10);
    BigInt b(5);

    std::cout << "a + b = ";
    (a + b).Write();
    std::cout << "\n";

    std::cout << "a - b = ";
    (a - b).Write();
    std::cout << "\n";

    std::cout << "a * b = ";
    (a * b).Write();
    std::cout << "\n";

    std::cout << "a / b = ";
    (a / b).Write();
    std::cout << "\n";

    BigInt c = a;
    std::cout << "Original c = ";
    c.Write();
    std::cout << "\n";

    std::cout << "++c = ";
    (++c).Write();
    std::cout << "\n";

    std::cout << "c++ = ";
    (c++).Write();
    std::cout << "\n";

    BigInt d(15);
    std::cout << "d = ";
    d.Write();
    std::cout << "\n";

    std::cout << "--d = ";
    (--d).Write();
    std::cout << "\n";

    std::cout << "d-- = ";
    (d--).Write();
    std::cout << "\n";

    return 0;
}
