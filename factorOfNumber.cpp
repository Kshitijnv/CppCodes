#include<iostream>
int main()
{
    //To calculate the factors of a given number
    int num;
    std::cout<<"Enter the number = ";
    std::cin>>num;
    std::cout<<"Factors of "<<num<<" are";
    for( int i=1;i<=num;i++){
        if(num%i==0)
        std::cout<<"\t"<<i;
    }
    return 0;
}