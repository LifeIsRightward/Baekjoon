#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> answervec;
  int amount, findNum, a, count = 0;

  cin >> amount;
  for (int i = 0; i < amount; i++) {
    cin >> a;
    answervec.push_back(a);
  }

  cin >> findNum;
  for (auto a : answervec) {
    if (a == findNum) {
      count++;
    }
  }

  cout << count;
  return 0;
}