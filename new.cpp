#include <iostream>
using namespace std;

int main(void) {
  int input_var = 0;
  do {
    cout << "enter a number";
    if (!(cin >> input_var)) {
      cout << "no input";
      cin.clear();
      cin.ignore(10000, '\n');
      break;
    }
    if (input_var != -1) {
      cout << "you entered" << input_var << endl;
    }
  } while (input_var != -1); 
  cout << "Done";
  return 0;
}
