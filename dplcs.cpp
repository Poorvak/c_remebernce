#include <iostream>
#include <stdlib.h>

using namespace std;

int Max(int a, int b)  {
  return a > b ? a : b;
}

int LongestCommonSubsequence(char *input1, char *input2, int len1, int len2) {
  int lenMatrix[10][10];
  //cout << input1, input2, len1, len2 << endl;
  for ( int i=0; i<len1; i++ )  {
    for ( int j=0; j<len2; j++ )  {
      if ( len1 == 0 || len2 == 0 )  {
        lenMatrix[i][j] = 0;
      }
      else if ( input1[i-1] == input2[j-1] )  {
        lenMatrix[i][j] = 1 + lenMatrix[i-1][j-1];
      }
      else {
        lenMatrix[i][j] = Max( lenMatrix[i][j-1], lenMatrix[i-1][j] );
      }
    }
  }
  return lenMatrix[len1][len2];
}

int main(void) {
  char input1[] = "ABCDEF";
  char input2[] = "ACEF";
  int len1 = strlen(input1);
  int len2 = strlen(input2);
  cout << "the length of longest common subsequence" << LongestCommonSubsequence(input1, input2, len1, len2) << endl;
  return 0;
}
