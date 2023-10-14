#include<iostream>
void swap(int num1,int num2);
void swap(float x,float y);
int main()
{
    int num1,num2;
    float x,y;
    std::cout<<"enter two integer numbers ";
    std::cin>>num1>>num2;
    std::cout<<"----Before swapping--- \n";
    std::cout<<"First number = "<<num1<<" Second number = "<<num2<<"\n";
    swap(num1,num2);

    std::cout<<"enter two floating point integers";
    std::cin>>x>>y;
    std::cout<<"----Before swapping--- \n";
    std::cout<<"First number = "<<x<<" Second number = "<<y<<"\n";
   
    swap(x,y);

   
    return 0;
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    std::cout<<"After swapping \n First number="<<a<<" Second number="<<b<<"\n";
}

void swap(float a,float b)
{
    float temp=a;
    a=b;
    b=temp;
    std::cout<<"After swapping \n First number ="<<a<<" Second number="<<b<<"\n";
}