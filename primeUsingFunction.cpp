#include<iostream>
bool prime(int);    //Function Declaration
int main()
{
    //To check the number is prime or not using function
    int num;
    bool check;
    do{
     std::cout<<"Enter the number = ";
    std::cin>>num;
    }while(num<0);
   
    check=prime(num);   //function call
    if(check==true)
    std::cout<<"Given number is prime nummber \n";
    else
     std::cout<<"Given number is not prime number \n";
    return 0;
}

bool prime(int num)     //function Definition
{
    if (num==0 || num==1)
    return false;

   for (int i=2;i<=num/2;i++){
    if(num%i==0)
    return false;
   }

   return true;    
}