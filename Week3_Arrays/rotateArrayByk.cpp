#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>& arr, int k) {
    vector<int> tempArray(k); int size = arr.size();
    k = k % size; // if k > size

    // Filling the temporary array with the last k digits of arr in order
    for(int i=0; i<k; i++) {
        tempArray[i] =  arr[size-(i+1)];
    }

    // Shifting values to the right, starting from back
    for (int i=size-1; i>=k; i--) {
        arr[i] = arr[i-k];
    }

    // Putting the 1st k values from tempArray back to arr, in reverse order. As originally they were placed in order.
    for (int i=0; i<k; i++) {
        arr[i] = tempArray[k-i-1];
    }
}