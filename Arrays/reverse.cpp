#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

void reverseArray(int arr[], int size) {
    for(int i = 0; i < (size/2); i++) {
        // cout << "i = " << i << endl;
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main() {
    int arr[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    cout << "Original Array is \n";
    printArray(arr, 14);

    // Reversing using function
    reverseArray(arr, 14);

    cout << "\nReversed Array is \n";
    printArray(arr, 14);
    
    return 0;

}