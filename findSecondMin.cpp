#include<iostream>
#include<cstdint>
int findSecondmin(int nums[], int n);
int main() { 
      //It is an implementation of a function called findSecondMin
    // which is used to find the second smallest element in an array of integers.
    int size;
        std::cout<<"Enter the number of elements = ";
        std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter the elements = ";
        std::cin>>arr[i];
    }

    int secondsmallest=findSecondmin(arr,size);
        std::cout<<"Second smallest Element is : "<<secondsmallest;
return 0;
}
int findSecondmin(int nums[], int n) {
    int min = nums[0];
    int secondmin=INT32_MAX; 
    for (int i = 1; i < n; i++) {
        if (nums[i]<min){
            secondmin=min;
            min = nums[i];
        }
        else if (nums[i] < secondmin && nums[i]!=min) {
            secondmin=nums[i];
        }
    }


    return secondmin; 
}