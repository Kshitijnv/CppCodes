#include<iostream>
int main() { 
    //It will calculate the sum of each digit of a positive given number
int num,sum=0,digit;
std::cout<<"Enter a number : ";
std::cin>>num;
if(num<0){
    std::cout<<"Number should be a positive integer number  ";
    return 1;
}

while(num!=0){
    digit=num%10;
    sum = sum + digit;
    num  = num/10;
}
std::cout<<"Sum of a given number is "<<sum<<std::endl;
return 0;
}