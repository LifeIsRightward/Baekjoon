#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> vec;
  int temp, total = 0;
  for (int i = 0; i < 5; i++) {
    cin >> temp;
    if (temp < 40) {
      temp = 40;
    }
    total += temp;
  }

  cout << total / 5;
  return 0;
}
