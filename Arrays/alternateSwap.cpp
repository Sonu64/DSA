#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}


void swapAlternate(int arr[], int size) {
    if(size%2 == 0) {
        for(int i = 0; i <= size-2; i = i + 2) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    else {
        for(int i = 0; i <= size-3; i = i + 2) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }      
    }
} 
int main() {
    int arr1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "1st Array before swapping - \n";
    printArray(arr1, 8);

    cout << "1st Array after swapping - \n";
    swapAlternate(arr1, 8);
    printArray(arr1, 8);

    cout << "\n\n\n" ;

    cout << "2nd Array before swapping - \n";
    printArray(arr2, 9);

    cout << "2nd Array after swapping - \n";
    swapAlternate(arr2, 9);
    printArray(arr2, 9);

    return 0;

}