#include<iostream>
int main()
{
    int num,sum=0;
    std::cout<<"Enter the number = ";
    std::cin>>num;
  
    for( int i=1;i<=num/2;i++){
        if(num%i==0)
         sum = sum + i;  
    }

    if(sum==num)
        std::cout<<num<<" is a perfect number";
    else
        std::cout<<num<<" is not a perfect number";
    return 0;
}