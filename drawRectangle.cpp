//This code is designed to print a rectangle of asterisks based on the user's input of length and breadth
#include<iostream>
using namespace std;

int main() {
    int len, bre;
    do {
        cout << "Enter a length: ";
        cin >> len;
        cout << "Enter a breadth: ";
        cin >> bre;
    } while (len < 0 || bre < 0);

    for (int i = 0; i < len; i++) {
        cout << "* ";
    }
    cout << "\n";

    for (int i = 0; i < bre - 2; i++) {
        cout << "* ";
        for (int j = 0; j < len - 2; j++) {
            cout << "  ";
        }
        if (len > 1) {
            cout << "* ";
        }
        cout << "\n";
    }

    if (bre > 1) {
        for (int i = 0; i < len; i++) {
            cout << "* ";
        }
    }
    cout << endl;

    return 0;
}
