#include<iostream>
int main() { 
int num,digit;
std::cout<<"Enter a number : ";
std::cin>>num;
while(num!=0){
    digit=num%10;
    num=num/10;
}
    std::cout<<"First digit of a given number is "<<digit<<std::endl;
return 0;
}