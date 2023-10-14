#include<iostream>
void ToUpperUsingArray(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
}
void ToUpperUsingPointer(char s[]){
    char *ptr = s;
    while(*ptr != '\0'){
        if(*ptr>='a' && *ptr<='z'){
            *ptr = *ptr - 32;
        }
        ++ptr;
    }

}
int main() { 
    char str[100];
    
    std::cout<<"Enter a string : ";
    std::cin>>str;
    std::cout<<"original string "<<str<<std::endl;
   ToUpperUsingArray(str);
    std::cout<<"Converting into UPPER case using ARRAY :- "<<str<<std::endl;
    ToUpperUsingPointer(str);
    std::cout<<"Converting into UPPER case using POINTER :- "<<str;
return 0;
}