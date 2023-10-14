#include<iostream>
// This  code demonstrates two methods, ToLowerUsingArray and ToLowerUsingPointer
void ToLowerUsingArray(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}
void ToLowerUsingPointer(char s[]){
    char *ptr = s;
    while(*ptr != '\0'){
        if(*ptr>='A' && *ptr<='Z'){
            *ptr = *ptr + 32;
        }
        ++ptr;
    }

}
int main() { 
    char str[100];
    
    std::cout<<"Enter a string : ";
    std::cin>>str;
    std::cout<<"original string "<<str<<std::endl;
   ToLowerUsingArray(str);
    std::cout<<"Converting into LOWER case using ARRAY :- "<<str<<std::endl;
    ToLowerUsingPointer(str);
    std::cout<<"Converting into LOWER case using POINTER :- "<<str;
return 0;
}