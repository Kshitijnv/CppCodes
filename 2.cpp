#include<iostream>
int main()
{
   
    int num,rev,digit;
    std::cout<<"Enter the number = ";
    std::cin>>num;
    while(num>0){
        digit=num%10;
        rev=rev*10 + digit;
        num=num/10;
    }
    std::cout<<"Reverse of a number is="<<rev<<"\n";
    return 0;
}