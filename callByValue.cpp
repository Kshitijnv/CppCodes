#include<iostream>
void swap(int a, int b);
int main() { 
    int x=5,y=19;
     std::cout<<"-----BEFORE SWAPPING------";
    std::cout<<"\nFirst element is "<<x;
    std::cout<<"\nSecond element is "<<y;
    swap(x,y);
return 0;
}
void swap(int a, int b){
    int temp = b;
    b=a;
    a=temp;
    std::cout<<"\n-----AFTER SWAPPING------";
    std::cout<<"\nFirst element is "<<a;
    std::cout<<"\nSecond element is "<<b;
}