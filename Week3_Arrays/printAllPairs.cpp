//
// Created by sonu on 4/10/25.
//
#include <iostream>
using namespace std;

void printAllPairs(int[], int);

int main() {
  int arr[] = {10, 20, 30};
  printAllPairs(arr, 3);
}


void printAllPairs(int arr[], int size) {
    for(int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++) {
        cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
      }
    }
}
