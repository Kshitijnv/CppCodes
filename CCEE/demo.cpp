// #include <iostream>
// //Q1
// using namespace std;
// void accept(int x, int y)
// {
//     cout << "in value method\n";
// }
// void accept(int &p, int &q)
// {
//     cout << "in referece method\n";
// }
// void main()
// {
//     int a = 20, b = 30;
//     // accept(a, b);     will give an error because SAME function params
// }

// Q2
#include <iostream>

int main()
{
    int *getAr();
    int *ptr;
    ptr = getAr();
    std::cout << ptr[2] << std::endl;
    // delete[] ptr; // Free the dynamically allocated memory
    return 0;
}
int *getAr()
{
    int arr[4] = {10, 20, 30, 40};
    return arr;
}
