#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> vec;
  int asccnt = 0;
  int descnt = 0;
  int temp = 0;
  int j = 0;
  for (int i = 1; i < 9; i++) {
    cin >> temp;
    vec.push_back(temp);
    if (temp == i) {
      asccnt++;
    }
  }
  for (int i = 8; i > 0; i--) {
    if (vec[j] == i) {
      descnt++;
    }
    j++;
  }

  if (asccnt == 8) {
    cout << "ascending";
  } else if (descnt == 8) {
    cout << "descending";
  } else {
    cout << "mixed";
  }

  return 0;
}
