#include <bits/stdc++.h>
using namespace std;
 

int largest(int arr[], int n)
{
    return *max_element(arr, arr + n);
}
 

int main()
{
    int arr[] = { 10, 24, 45, 90, 98 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    
    cout << largest(arr, n);
    return 0;
}