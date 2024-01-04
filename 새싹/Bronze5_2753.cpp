#include <iostream>

using namespace std;

int main() {
  int year = 0;
  int isYoon = 0;

  cin >> year;

  if (year % 4 == 0) {
    if (year % 100 != 0 || year % 400 == 0) {
      isYoon = 1;
    }
  } else {
    isYoon = 0;
  }

  cout << isYoon;
  return 0;
}