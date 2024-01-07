#include<iostream>
using namespace std;
int pow(){
    const int num1=2;
    cout<<"value of num1 in pow : "<<num1<<endl;
    cout<<"address of num1 in pow : "<<&num1<<endl;
    return num1;
}
int main() { 
   int add = pow();
   // cout<<"value of num1 in main"<<*add<<endl;
    cout<<"value of num1 in main "<<add<<endl;
    

return 0;
}