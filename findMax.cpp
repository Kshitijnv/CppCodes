#include<iostream>
int findMax(int nums[], int n);
int main() { 
    // The provided code is an implementation of a function called findMax
    // which is used to find the largest element in an array of integers
    int size;
        std::cout<<"Enter the number of elements = ";
        std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter the elements = ";
        std::cin>>arr[i];
    }

    int largest=findMax(arr,size);
        std::cout<<"Largest Element is : "<<largest;
return 0;
}
int findMax(int nums[], int n) {
    int max = nums[0]; 
    for (int i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max; 
}