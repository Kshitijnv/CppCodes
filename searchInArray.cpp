#include<iostream>
bool search(int nums[], int n, int element);
int main() { 
    //This code is an implementation of a function called search 
    //that is used to check if a given element is present in an array of integers
    int nums[] = {12, 7, 3, 4, 5, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    int element;
    std::cout<<"Enter the element to find : ";
    std::cin>>element;

    bool find = search(nums, n , element);

    if(find==1)
        std::cout<<"Element "<< element<<" is present in the array ";
    else    
        std::cout<<"Element "<< element<<" is not present in the array ";
return 0;
}
bool search(int nums[], int n, int element){
    for(int i=0;i<n;i++){
        if(nums[i]==element)
            return true;
    }
            return false;
}