//
// Created by sonu on 4/10/25.
//
#include <iostream>
using namespace std;

int getUniqueElement(int[], int);

int main() {
  int arr[] = {10, 20, 30, 40, 50, 10, 30, 20, 50, 40, 60};
  cout << "Unique element in the array is " << getUniqueElement(arr, 11) << endl;
}

int getUniqueElement(int arr[], int size) {
  int uniqueElement = 0; // any number XORed with 0 is the number itself, same numbers XORed = 0
  for(int i = 0; i < size ; i++) {
    uniqueElement = uniqueElement ^ arr[i];
  }
  return uniqueElement;
}