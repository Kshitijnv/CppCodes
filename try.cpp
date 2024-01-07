#include<iostream>
// using namespace std;
class abc{
    int num=10;

public:
        int function1(){    //function1 can be anything like getNum
            return num;
        }
};
int main() { 
    // std::string name;
    char name[11];
    int age;
    abc obj;
    int number;
    number=obj.function1();
    std::cout<<number<<std::endl;
    std::cout<<"enter name"<<std::endl;
    std::cin>>age;
    // std::cin>>name;
    // getline(std::cin,name);
    std::cin.ignore(); //clears the last buffer
    std::cin.getline(name,10);
     std::cout<<"your name"<<name<<std::endl;
return 0;
}