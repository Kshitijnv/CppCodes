#include<iostream>
int main()
{
    //To check the given number is plaindrome or not
    //Palindrome ex: 121,131,343,787,998899,....
    int num,digit,rev=0,onum;
    std::cout<<"Enter the number = ";
    std::cin>>num;
    onum=num;
    while(num!=0){

        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
    if(rev==onum){
        std::cout<<"Given number is palindrome number \n";   
    }
    else
    std::cout<<"Given number is not palindrome nummber \n";
    return 0;
}
