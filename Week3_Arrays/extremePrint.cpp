#include <iostream>
using namespace std;

void printExtremes(int[], int);

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Original array: " << endl;
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Extreme Elements of the Array: " << endl;
    printExtremes(arr, 10);
    return 0;
}



void printExtremes(int arr[], int size) {
  int start = 0, end = size - 1;
  while (start <= end) {
    // For Odd no. of elements start and end point to same location, giving repeated element.
    // So print only one of arr[start] or arr[end]
    if (start == end)
        cout << arr[start] << "\t";
    else
        cout << arr[start] << " " << arr[end] << "\t";
      start++;
      end--;
  }
    cout << endl;
}