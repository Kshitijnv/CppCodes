// It is designed to calculate the average of marks in 'n' subjects with DMA using malloc()
#include <iostream>
using namespace std;
int main()
{
    int n, avg, sum = 0;
    cout << "Enter the number of subjects : ";
    cin >> n;
    float *pi = (float *)malloc(n * sizeof(float));
    cout << "Enter the marks of " << n << " subjects : ";
    for (int i = 0; i < n; i++)
        cin >> pi[i];
    for (int i = 0; i < n; i++)
    {
        sum = sum + pi[i];
    }
    avg = sum / n;
    cout << "Average of " << n << " is : " << avg;
    free(pi);
    return 0;
}