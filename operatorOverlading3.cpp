#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

public:
    void write(){
        std::cout<<"Enter the name and age of 4 peoples \n";
    }

    void read(){
        std::cout<<"Enter the name of person ";
        std::cin>>name;
        std::cout<<"Enter the age of person ";
        std::cin>>age;
    }
    Person(){}
    Person(std::string n, int a) : name(n), age(a) {}

    // Overload the equality (==) operator
    bool operator==(Person other) {
        return (name == other.name) && (age == other.age);
    }

    // Overload the inequality (!=) operator
    bool operator!=(Person other){
        return (name != other.name) && (age != other.age);
    }
};

int main() {
    Person person1;
    Person person2;
   Person person3;
    Person person4;

   person4.write();
   person1.read();
   person2.read();
   person3.read();
   person4.read();
    

    if (person1 == person2) {
        std::cout << "person1 is equal to person2" << std::endl;
    } else {
        std::cout << "person1 is not equal to person2" << std::endl;
    }

    if (person1 == person3) {
        std::cout << "person1 is equal to person3" << std::endl;
    } else {
        std::cout << "person1 is not equal to person3" << std::endl;
    }

   
    if (person2 != person3) {
        std::cout << "person2 is not equal to person3" << std::endl;
    } else {
        std::cout << "person2 is equal to person3" << std::endl;
    }

     if (person2 != person4) {
        std::cout << "person2 is not equal to person4" << std::endl;
    } else {
        std::cout << "person2 is equal to person4" << std::endl;
    }
    return 0;
}
