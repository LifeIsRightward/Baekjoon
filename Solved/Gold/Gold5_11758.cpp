#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CCW(pair<int, int> P1, pair<int, int> P2, pair<int, int> P3) {
  int S =
      (P1.first * P2.second) + (P2.first * P3.second) + (P3.first * P1.second);
  S -= (P1.second * P2.first) + (P2.second * P3.first) + (P3.second * P1.first);
  // 외적
  return S;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<pair<int, int>> pvec(3);
  cin >> pvec[0].first >> pvec[0].second;
  cin >> pvec[1].first >> pvec[1].second;
  cin >> pvec[2].first >> pvec[2].second;

  int result = CCW(pvec[0], pvec[1], pvec[2]);

  if (result == 0) {
    cout << "0";
  } else if (result > 0) {
    cout << "1";
  } else if (result < 0) {
    cout << "-1";
  }

  return 0;
}
