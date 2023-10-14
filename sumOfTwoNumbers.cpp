#include <iostream>

int main() {
    //Sum of two positive given numbers
int N, M;
    
std::cout << "Enter the first positive integer (N): ";
std::cin >> N;
std::cout << "Enter the second positive integer (M): ";
std::cin >> M;

if (N > M) {
    std::cout << "N should be less than or equal to M" << std::endl;
    return 1; 
}

int sum = 0;
for (int i = N; i <= M; ++i) {
    sum += i;
}
std::cout<<"The sum of numbers between "<<N<<" and "<<M<<" is: "<<sum<<std::endl;
return 0; 
}
