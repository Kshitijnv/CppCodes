#include<iostream>
void primeNum(int start, int end);
int main(){
    //It will generate the prime numbers between two positive numbers using function and also validate that two given number must be positive
    int start,end;
    
    do{
    std::cout<<"Enter the starting positive number=";
    std::cin>>start;
    std::cout<<"Enter the ending positive number=";
    std::cin>>end;
    }while(start<0 || end<0 || start>end);
    std::cout<<"Prime numbers are = ";
    primeNum(start,end);
    return 0;

}
void primeNum(int start, int end){
    int count;
     for(int i=start;i<=end;i++){

        if(i==0 || i==1)
            continue;
        
        count=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count=0;
                break;
            }
            
        }
        if(count==1)
        std::cout<<"\t"<<i;
            }
}