#include <iostream>
using namespace std;

void rotateByOne(int[], int);

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  cout << "Array before Rotating by One : " << endl;
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Array after Rotating by One : " << endl;
  rotateByOne(arr, 10);
  return 0;
}

void rotateByOne(int arr[], int size) {
  // MY APPROACH USING 2 VARS, FROM THE BEGINNING OF THE ARRAY
  int temp = arr[0], t = 0;
  arr[0] = arr[size - 1];
  for (int i = 0; i < size-1; i++) {
      t  = arr[i+1];
      arr[i+1]  = temp;
      temp = t;
   }
   for (int i = 0; i < size; i++) {
     cout << arr[i] << " ";
   }

  /**
   * REVERSE APPROACH IN CLASS, USING SINGLE VAR
  int temp = arr[size - 1];
  for (int i = size - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;

  **/
}

