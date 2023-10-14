#include<iostream>
int main(){
    //Print the prime numbers between two given numbers
    int start,end,count;
    std::cout<<"Enter the starting number=";
    std::cin>>start;
    std::cout<<"Enter the last number=";
    std::cin>>end;
    std::cout<<"Prime numbers are = ";
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

    
    
    return 0;

}