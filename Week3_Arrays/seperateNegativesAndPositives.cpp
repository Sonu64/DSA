#include <iostream>
using namespace std;

void putNegativesFirst(int arr[], int n) {
    int i=0, j=0;
    for(i=0; i<n; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Before: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    putNegativesFirst(arr, n);
    
    cout << "After: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}