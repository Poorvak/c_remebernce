#include <iostream>

using namespace std;

bool checkVowel( char a )  {
  if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' )  {
    return true;
  }
  return false;
}
void calculateRatio(char *str1)  {
  int lenOfOriginalString = strlen(str1);
  int lenOfNewString = 0;
  if (lenOfOriginalString == 0)  {
    cout << lenOfNewString << "/" << lenOfOriginalString << endl;
    return ;
  }

  for ( int i=4; i<lenOfOriginalString-4; i++ )  {
    if (!(checkVowel(str1[i])))  {
      lenOfNewString += 1;
    }
  }
  cout << lenOfNewString + 4 << "/" << lenOfOriginalString << endl;
  return;
}
int main(void)  {
  int tc=0;
  for (int i=0; i<tc; i++)  {
    char input1[200];
    cin >> input1;
    calculateRatio(input1);
  }
  return 0;
}
