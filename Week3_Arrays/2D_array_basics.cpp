#include <iostream>
using namespace std;

void printRowWise(int[][4], int, int);
void printColWise(int[][4], int, int);
void transpose(int[][4], int, int);

int main() {
    
    int arr[][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}
    };

    cout << "Before Transpose - " << endl;
    cout << "Printing Row-wise : " << endl;
    printRowWise(arr, 3, 4);
    cout << endl << endl;

    cout << "Printing Column-wise : " << endl;
    printColWise(arr, 3, 4);
    cout << endl << endl;


    cout << "After Transpose - " << endl; 
    // Notice now no. of cols and rows will be reversed during printing

    transpose(arr, 3, 4);

    cout << "Printing Row-wise : " << endl;
    printRowWise(arr, 4, 3);
    cout << endl << endl;

    cout << "Printing Column-wise : " << endl;
    printColWise(arr, 4, 3);
    cout << endl << endl;



    return 0;
}

void printRowWise(int arr[][4], int row, int col) {
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

void printColWise(int arr[][4], int row, int col) {
  for(int i=0; i<col; i++) {
    for(int j=0; j<row; j++) {
      cout << arr[j][i] << "\t";
    }
    cout << endl;
  }
}

void transpose(int arr[][4], int row, int col) {
  for(int i=0; i<row; i++) {
    for(int j=i+1; j<col; j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }
}