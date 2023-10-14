#include<iostream>
int findMin(int nums[], int n);
int main() { 
    // The provided code is an implementation of a function called findMin
    //which is used to find the smallest element in an array of integers
    int size;
    std::cout<<"Enter the numbers of elements : ";
    std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter the elements : ";
         std::cin>>arr[i];
    }
    int smallest = findMin(arr,size);
    std::cout<<"Smallest number is : "<<smallest;

return 0;
}
int findMin(int nums[], int n){
    int min = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<min){
            min=nums[i];
        }
    }
    return min;
}