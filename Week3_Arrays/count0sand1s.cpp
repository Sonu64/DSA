#include <iostream>
using namespace std;

int zeroCount(int[], int);
int oneCount(int[], int);

int main() {
  int arr[10] = {0, 1, 1, 0, 1, 0, 0, 0, 1, 1}, zeros = 0, ones = 0, N = 10;
  zeros = zeroCount(arr, N);
  ones = oneCount(arr, N);
  cout << "There are " << zeros << " zeros and " << ones << " ones in the array." << endl;
  return 0;
}

int zeroCount(int arr[], int N) {
  int zeroes = 0;
  for(int i=0; i<N; i++) {
    if (arr[i] == 0)
      zeroes++;
  }
  return zeroes;
}

int oneCount(int arr[], int N) {
  int ones = 0;
  for(int i=0; i<N; i++) {
    if (arr[i] == 1)
      ones++;
  }
  return ones;
}