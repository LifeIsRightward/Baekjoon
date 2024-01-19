#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp1 = 0;
  int temp2 = 0;
  int testcase = 0;
  cin >> testcase;

  vector<pair<int, int>> pvec(testcase);

  for (int i = 0; i < testcase; i++) {
    cin >> temp1 >> temp2;
    pvec[i].first = temp1;
    pvec[i].second = temp2;
  }

  sort(pvec.begin(), pvec.end(), cmp);

  for (auto a : pvec) {
    cout << a.first << " " << a.second << "\n";
  }

  return 0;
}
// x가 앞에수, y가 뒤의 수
// < 오름차순, > 내림차순
bool cmp(pair<int, int> x, pair<int, int> y) {
  if (x.second == y.second) {
    return x.first < y.first;
  }

  return x.second < y.second;
}
