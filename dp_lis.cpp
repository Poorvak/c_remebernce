#include <iostream>
#include <stdlib.h>

using namespace std;

int lis(int arr[], int n) {
  int *lis, max = 0;
  lis = (int *)malloc(sizeof(int) * n);

  for (int i=0; i<n; i++) {
    lis[i] = 1;
  }

  for (int i=1; i<n; i++) {
    for (int j=0; j<i; j++) {
      if ( arr[j] < arr[i] ) {
        lis[i] = 1 + lis[j];
      }
    }
  }

  for (int i=0; i<n; i++ ) {
    if ( max < lis[i] ) {
      max = lis[i];
    }
  }

  free(lis);

  return max;
}

int main(void) {
  int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
  int n = sizeof(arr) / sizeof(int);
  cout << "The length of the longest increasing sequence" << lis(arr, n) << endl;
  return 0;
}
