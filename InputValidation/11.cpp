#include<iostream>
#include<math.h>
#include<limits>
int main(){
    int num,onum,count=0,j,digit,result=0,finalnum;
   while (true) {
        std::cout << "Enter a positive integer: ";
        if (std::cin >> num && num >= 0 && std::cin.peek() == '\n') {
            break; 
        } 
        else {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        }
    }
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