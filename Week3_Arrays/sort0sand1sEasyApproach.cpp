//
// Created by sonu on 4/10/25.
//
#include <iostream>
using namespace std;

void sortZerosAndOnes(int[], int);

int main() {
    int arr[] = {0,1,0,1,0,0,0,1,1,0,1,1,1,0};
    sortZerosAndOnes(arr, 14);
    return 0;
}

void sortZerosAndOnes(int arr[], int size) {
    int zeroCount = 0, oneCount = 0, index = 0;
    for(int i = 0; i < size; i++) {
      if(arr[i] == 0) zeroCount++;
    }
    for(int i = 0; i < size; i++) {
      if(arr[i] == 1) oneCount++;
    }

    while(zeroCount--) {
      arr[index] = 0;
      index++;
    }

    while(oneCount--) {
      arr[index] = 1;
      index++;
    }

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}