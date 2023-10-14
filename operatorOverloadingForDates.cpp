#include <iostream>
// Implement a Date class and also overload  relational operators to compare two dates.
class Date {
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void Read() {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    void Write() {
        std::cout << day << "/" << month << "/" << year;
    }

    bool operator==(const Date& obj2) const {
        return (day == obj2.day) && (month == obj2.month) && (year == obj2.year);
    }

    bool operator<(const Date& obj2) const {
        if (year < obj2.year) return true;
        if (year > obj2.year) return false;
        if (month < obj2.month) return true;
        if (month > obj2.month) return false;
        return day < obj2.day;
    }

    bool operator<=(const Date& obj2) const {
        return (*this < obj2) || (*this == obj2);
    }

    bool operator>(const Date& obj2) const {
        return !(*this <= obj2);
    }

    bool operator>=(const Date& obj2) const {
        return !(*this < obj2);
    }
};

int main() {
    Date date1, date2;

    std::cout << "Enter the first date:\n";
    date1.Read();
    std::cout << "Enter the second date:\n";
    date2.Read();

    std::cout << "First date: ";
    date1.Write();
    std::cout << "\nSecond date: ";
    date2.Write();

    if (date1 == date2) {
        std::cout << "\nThey are equal.\n";
    } else if (date1 < date2) {
        std::cout << "\nThe first date is earlier.\n";
    } else {
        std::cout << "\nThe second date is earlier.\n";
    }

    return 0;
}
