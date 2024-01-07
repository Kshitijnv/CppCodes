#include<iostream>
using namespace std;

void functionWithLocalVariable() {
    int localVar = 10; 
    cout << "Local variable: " << localVar << endl;
}

void functionWithStaticVariable() {
    static int staticVar = 20; 
    cout << "Static variable: " << staticVar << endl;
    staticVar++; 
}

void functionWithConstVariable() {
    const int constVar = 30; 
    cout << "Const variable: " << constVar << endl;
    // constVar++; // Attempting to modify a const variable results in an error
}

void functionWithStaticConstVariable() {
    static const int staticConstVar = 40; 
    cout << "Static const variable: " << staticConstVar << endl;
    // staticConstVar++; // Attempting to modify a static const variable results in an error
}

int main() { 

    functionWithLocalVariable();
    // cout << "Local variable outside function: " << localVar << endl; // This would result in an error
    
   
    functionWithStaticVariable();
    functionWithStaticVariable(); 
    functionWithStaticVariable(); 
    
    // Const variable
    functionWithConstVariable();
    
    // Static const variable
    functionWithStaticConstVariable();
    functionWithStaticConstVariable(); // The static const variable retains its value across function calls
    
    return 0;
}
