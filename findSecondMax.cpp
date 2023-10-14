#include<iostream>
int findSecondMax(int nums[], int n);
int main() { 
    //is an implementation of a function called findSecondMax
    // which is used to find the second largest element in an array of integers.
    int size;
        std::cout<<"Enter the number of elements = ";
        std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter the elements = ";
        std::cin>>arr[i];
    }

    int secondlargest=findSecondMax(arr,size);
        std::cout<<"Second Largest Element is : "<<secondlargest;
return 0;
}
int findSecondMax(int nums[], int n) { // 5 8 8 3
    int max = nums[0]; // 8
    int secondmax=nums[1]; //5
    for (int i = 1; i < n; i++) {
        if (nums[i]>max){  // 8>8
            secondmax=max;
            max = nums[i];
        }
        else if (nums[i] > secondmax && nums[i]!=max) {//3>5 3!=8
            secondmax=nums[i];
        }
    }
    return secondmax; 
}