#include<iostream>
int main()
{
    int num,digit,rev=0;
    std::cout<<"Enter the number = ";
    std::cin>>num;

    while(num!=0){

        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
       
    while (rev!=0)
    {
        digit=rev%10;
         switch (digit)
        {
        case 0:
            std::cout<<"zero\t";
            break;
        
        case 1:
            std::cout<<"one \t";
            break;

        case 2:
            std::cout<<"two \t";
            break;
        
        case 3:
            std::cout<<"three \t";
            break;

        case 4:
            std::cout<<"four \t";
            break;

        case 5:
            std::cout<<"five \t";
            break;

        case 6:
            std::cout<<"six \t";
            break;

        case 7:
            std::cout<<"seven \t";
            break;

        case 8:
            std::cout<<"eight \t";
            break;

        case 9:
            std::cout<<"nine \t";
            break;
        }
        rev=rev/10;
    }
 return 0;   
}