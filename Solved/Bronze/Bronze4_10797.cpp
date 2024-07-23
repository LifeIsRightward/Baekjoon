#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, tmp, cnt = 0;
vector<int> vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < 5; i++) {
    cin >> tmp;
    if (n == tmp) {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}
