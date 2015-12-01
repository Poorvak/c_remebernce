#include <iostream>
using namespace std;

#define DAYS 7
#define HOURS 8

int shoes_cost = 225;

int calcMethod1(int);
int calcMethod2(int);
int calcMethod3(int);
int main() {
  int weekly_sales;
  cin >> weekly_sales;
  int option1 = calcMethod1(weekly_sales);
  int option2 = calcMethod2(weekly_sales);
  int option3 = calcMethod3(weekly_sales);
  cout << (option1 < option2 ? (option2 < option3 ? option3 : option2 ) : (option1 < option3 ? option3 : option1)) << endl;
  return 0;
} 

int calcMethod1(int weekly_sales) {
  return 600;
}

int calcMethod2(int weekly_sales) {
  return 7*HOURS*DAYS + (shoes_cost/10)*weekly_sales;
}

int calcMethod3(int weekly_sales) {
  return (shoes_cost/5)*weekly_sales + 20*weekly_sales;
}
