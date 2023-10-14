#include<iostream>
int main(){
    int num,onum,digit,result=1;
    std::cout<<"Enter the number = ";
    std::cin>>num;
     onum=num;
    while(num!=0){

        digit = num%10;
        result=result*digit;
        num = num/10;
    }
    std::cout<<"Product of digits of "<<onum<<" is "<<result;
    return 0;
}