#include<iostream>
void swap(int *a, int *b);

int main()
{
    int num1,num2;;
    std::cout<<"Enter the first number = ";
    std::cin>>num1;
    std::cout<<"Enter the second number = ";
    std::cin>>num2;
    std::cout<<"----Before swapping--- \n";
    std::cout<<"First number = "<<num1<<" Second number = "<<num2<<"\n";
    swap(&num1,&num2);
    std::cout<<"----After swapping--- \n";
    std::cout<<"First number = "<<num1<<" Second number = "<<num2;

    return 0;
}
void swap(int *a, int *b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}