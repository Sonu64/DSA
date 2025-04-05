#include <iostream>
using namespace std;

void reverseArray(int[], int);

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Original array: " << endl;
  for(int i=0; i<10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  reverseArray(arr, 10);
  cout << "Reversed array: " << endl;
  for(int i=0; i<10; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}



void reverseArray(int arr[], int N) {
  int start = 0, end = N-1;
  while(start <= end) {
    //for odd number of elements start == end ends loop,
    //for even number of elements start > end ends loop.
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}