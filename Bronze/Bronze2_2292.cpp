#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int index = 0;
  cin >> index;
  int i = 0;

  for (int sum = 2; sum <= index; i++) {
    sum += 6 * i;
  }

  if (index == 1) {
    i = 1;
  }

  cout << i;
  return 0;
}
