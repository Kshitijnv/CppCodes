#include<iostream>
int main()
{
    
    int num;
    do{
    std::cout<<"Enter a positive number = ";
    std::cin>>num;
    }while(num<0);
    std::cout<<"Factors of "<<num<<" are";
    for( int i=1;i<=num;i++){
        if(num%i==0)
        std::cout<<"\t"<<i;
    }
     
    return 0;
}