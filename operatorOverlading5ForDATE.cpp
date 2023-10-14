#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    
    Date& operator++() {
        day++;
        return *this;
    }

    Date operator++(int) {
        Date temp(*this);
        day++;
        return temp;
    }

    Date& operator--() {
        day--;
        return *this;
    }

    Date operator--(int) {
        Date temp(*this);
        day--;
        return temp;
    }

    
    Date operator+(int value) const {
        Date result(*this);
        result.day += value;
        return result;
    }

    Date operator-(const Date& obj2) const {
        Date result(*this);
        result.day -= obj2.day;
        result.month -= obj2.month;
        result.year -= obj2.year;
        return result;
    }

    Date operator-(int value) const {
        Date result(*this);
        result.day -= value;
        return result;
    }

    void Read() {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    void Write() const {
        std::cout << day << "/" << month << "/" << year;
    }

    bool operator==(const Date& obj2) const {
        return (day == obj2.day) && (month == obj2.month) && (year == obj2.year);
    }
};

int main() {
    Date date1(10, 5, 2022);
    Date date2(15, 5, 2022);

    std::cout << "date1 = ";
    date1.Write();
    std::cout << "\n";

    std::cout << "date2 = ";
    date2.Write();
    std::cout << "\n";

    Date date3 = date1 + 5;
    std::cout << "date3 = date1 + 5 = ";
    date3.Write();
    std::cout << "\n";

    Date date4 = date2 - date1;
    std::cout << "date4 = date2 - date1 = ";
    date4.Write();
    std::cout << "\n";

    Date date5 = date1 - 3;
    std::cout << "date5 = date1 - 3 = ";
    date5.Write();
    std::cout << "\n";

    Date date6 = date1;
    std::cout << "Original date6 = ";
    date6.Write();
    std::cout << "\n";

    std::cout << "++date6 = ";
    (++date6).Write();
    std::cout << "\n";

    std::cout << "date6++ = ";
    (date6++).Write();
    std::cout << "\n";

    Date date7(1, 1, 2023);
    std::cout << "date7 = ";
    date7.Write();
    std::cout << "\n";

    std::cout << "--date7 = ";
    (--date7).Write();
    std::cout << "\n";

    std::cout << "date7-- = ";
    (date7--).Write();
    std::cout << "\n";

    return 0;
}
