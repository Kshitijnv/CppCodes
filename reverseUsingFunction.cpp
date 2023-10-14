#include<iostream>
int reverse(int num);   //Function Declaration
int main()
{
    //To calculate a reverse of a number using function
    int choice;
    do{
    int num,rev;
    std::cout<<"Enter a positive number = ";
    std::cin>>num;
    rev=reverse(num);   //Calling Function
    std::cout<<"Reverse of a number is="<<rev<<"\n";
    std::cout<<"Do you want to find reverse of another number press 1 \n";
    std::cout<<"Press 0 for EXIT \n";
    std::cin>>choice;
    }while(choice);
    return 0;
}

int reverse(int num){   //Function Defintion
    int rev=0,digit;
    while(num>0){
        digit=num%10;
        rev=rev*10 + digit;
        num=num/10;
    }
    return rev;
}