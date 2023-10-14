#include<iostream>
int main() { 
    //It will calculate sum of each digit of a given number weather it is negative or positive
int num,sum=0,digit;
std::cout<<"Enter a number : ";
std::cin>>num;
if(num<0){
   num=-num;
}

while(num!=0){
    digit=num%10;
    sum = sum + digit;
    num  = num/10;
}
std::cout<<"Sum of a given number is "<<sum<<std::endl;
return 0;
}