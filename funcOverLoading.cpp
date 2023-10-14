#include<iostream>
void f1();
void f1(int);
int f1(int, int);
float f1(int, double);

//float f1(int, int);  CANNOT OVERLOAD FUNCTIONS DISTINGUISHED BY RETURN TYPE ALONE BECAUSE WHILE CALLING FUNCTION RETURN TYPE HAS NO ROLE

int main() { 

    f1();
    f1(25);
    int mul = f1(5,6);
    float add = f1(5, 2.53);
    std::cout<<"Multipliation of two number : "<<mul<<std::endl;
   std::cout<<"Addition of two numbers : "<<add;
return 0;
}
void f1(){
    std::cout<<"---Function Overloading---"<<std::endl;
}
void f1(int x){
    std::cout<<"Value of x is "<<x<<std::endl;
}

int f1(int x, int y){
    return x*y;
}

float f1(int x, double y){
    return x+y;
}
