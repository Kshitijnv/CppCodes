#include<iostream>
#include<math.h>
int main(){
    int num,onum,count=0,j,digit,result=0,finalnum;
    std::cout<<"Enter the number = ";
    std::cin>>num;
    onum=num;
    finalnum=num;
    while(num>0){
         count++;
         num=num/10;
    }
   
    while(onum>0)
    {
        digit=onum % 10;
        digit=pow(digit,count);
        result=result + digit;
        onum=onum/10;
    }
    if(result==finalnum)
    {
        std::cout<<"Given number is armstrong number";
    }
    else{
        std::cout<<"Given number is not armstrong number";
    }
    
    return 0;
}