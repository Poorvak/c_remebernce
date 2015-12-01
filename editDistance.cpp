#include <iostream>

using namespace std;

int editDistance(char *str1, char *str2, int len1, int len2)  {
  int editMatrix = [10][10];
  for ( int i=0; i<len1; i++ )  {
    for ( int j=0; j<len2; j++ )  {
      if ( len1 == 0 )  {
        editMatrix[i][j] = len2;
      }
      else if ( len2 == 0 )  {
        editMatrix[i][j] = len1;
      }
      else if ( str1[])
      else  {
        editMatrix[i][j] = 1 + min(editDistance()
      }
    }
  }
}


int main(void) {
  char str1[] = "geek";
  char str2[] = "gesek";
  cout << "minimum number of steps involved for edisDistance" << editDistance(str1, str2, strlen(str1) ,strlen(str2)) << endl;
  return 0;
}
