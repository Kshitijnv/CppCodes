#include<iostream>
#include<limits>
int main()
{
    int num,sum=0;
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
  
    for( int i=1;i<=num/2;i++){
        if(num%i==0)
         sum = sum + i;  
    }

    if(sum==num)
        std::cout<<num<<" is a perfect number";
    else
        std::cout<<num<<" is not a perfect number";
    return 0;
}