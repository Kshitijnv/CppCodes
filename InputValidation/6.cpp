#include<iostream>
int main() { 
int num,sum=0,digit;
do{
std::cout<<"Enter a number : ";
std::cin>>num;
}while(num<0 );

while(num!=0){
    digit=num%10;
    sum = sum + digit;
    num  = num/10;
}
std::cout<<"Sum of a given number is "<<sum<<std::endl;
return 0;
}