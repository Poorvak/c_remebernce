#include <iostream>
#include <stdlib.h>

using namespace std;

int ceilIndex(int arr[], int leftIndex, int rightIndex, int value) {
  while ( rightIndex - leftIndex > 1 ) {
    int mediumIndex = leftIndex + (rightIndex - leftIndex) / 2;
    if ( arr[mediumIndex] > value ) {
      rightIndex = mediumIndex;
    }
    else {
      leftIndex = mediumIndex;
    }
  }
  return rightIndex;
}

int LongestIncreasingSequence(int arr[], int len) {
  int *tailList = new int[len];
  int length;
  memset(tailList, 0, sizeof(tailList[0]) * len);

  tailList[0] = arr[0];
  length = 1;
  
  for ( int i=1; i<len; i++ ) {
    if ( arr[i] > tailList[length-1] ) {
      tailList[length++] = arr[i];
    }
    else if ( arr[i] < tailList[0] ) {
      tailList[0] = arr[i];
    }
    else {
      tailList[ceilIndex(arr, -1, length-1, arr[i])] = arr[i];  
    }
  }

  delete[] tailList;
  return length;
}
int main(void) {
  int arr[] = {2, 5, 3, 7, 11, 8, 10, 13, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "Longest increasing subsequence length is" << LongestIncreasingSequence(arr, size) << endl;
  return 0;
}
