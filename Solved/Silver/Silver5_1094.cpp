#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int X = 0;
  int cnt = 0;
  string str;
  cin >> X;

  str = bitset<8>(X).to_string();

  for (auto a : str) {
    if (a == '1') {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}
