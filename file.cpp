#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char first_name[30], last_name[30];
  char file_name[30];
  int age;
  cout << "First name" << endl; cin >> first_name;
  cout << "Last Name" << endl; cin >> last_name;
  cout << "Enter age" << endl; cin >> age;
  cout << "enter file name" << endl; cin >> file_name;

  ofstream People(file_name, ios::out);
  People << first_name << endl << last_name << endl << age << endl;
  return 0; 
}
