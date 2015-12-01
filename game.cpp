#include <iostream>
#include <cstdlib>
using namespace std;

int inputMethod() {
  int input_var;
  cin >> input_var;
  cin.clear();
  return input_var;
}
bool compareNumbers(int var_one, int var_two) {
  return var_one == var_two;
} 
int main(void) {
  while (!(compareNumbers(inputMethod(), rand() % 10))) {
    cout << "The input is still not equal to magic number" << endl;
  }
  cout << "Finally the number are equal" << endl;
  return 0;
}
