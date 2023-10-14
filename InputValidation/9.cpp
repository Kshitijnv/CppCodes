#include<iostream>
#include<limits>
int main()
{
    int num,digit,rev=0,onum;
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
