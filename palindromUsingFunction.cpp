#include<iostream>
void palindromeCheck(int num);
int main()
{
    //To check the number is palindrome using function and also validate that the given number must be positive
    int num;
    do{
    std::cout<<"Enter a positive number = ";
    std::cin>>num;
    }while(num<0);
    palindromeCheck(num);
    return 0;
}

void palindromeCheck(int num){
    int digit,rev=0;
    int onum=num;
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
}