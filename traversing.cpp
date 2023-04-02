#include <iostream>
using namespace std;
int main() {
    int *ptr; 
    int arr[] = {1, 1, 2, 3, 4, 4};

    cout << "The Traversing of array: ";

    ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *ptr <<endl;
        
        ptr++;
    }

    return 0;
}