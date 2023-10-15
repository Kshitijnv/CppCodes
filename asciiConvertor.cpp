// This code is designed to take a character input from the user and then convert it to its corresponding ASCII value
#include<iostream>
int main() { 
    char ch;
    std::cout<<"Enter a letter : ";
    std::cin>>ch;
    int asci=int(ch);
    std::cout<<"ASCII Value of a given number is : "<<asci;
    
return 0;
}