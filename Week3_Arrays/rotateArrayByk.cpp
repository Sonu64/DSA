#include <iostream>
#define MAX 100
using namespace std;

void rotateByK(int[], int, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Array before Rotating by One : " << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array after Rotating by Three : " << endl;
    rotateByK(arr, 3, 7);
    return 0;
}

void rotateByK(int arr[], int k, int size) {



    int tempArray[MAX];

    // Filling the temporary array with the last k digits of arr in order
    for(int i=1; i<=k; i++) {
      tempArray[i-1] =  arr[size-i];
    }

    // Shifting values to the right, starting from back
    for (int i=size-1; i>=0; i--) {
        arr[i] = arr[i-k];
    }

    // Putting the 1st k values from tempArray back to arr, in reverse order
    for (int i=0; i<k; i++) {
        arr[i] = tempArray[k-i-1];
    }


    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

