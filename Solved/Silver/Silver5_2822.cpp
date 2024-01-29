#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int i = 1;
  int temp = 0;
  int sum = 0;
  vector<pair<int, int>> pvec(8);
  vector<int> indexvec;

  for (int i = 1; i < 9; i++) {
    cin >> temp;
    pvec[i - 1].first = temp;
    pvec[i - 1].second = i;
  }

  sort(pvec.rbegin(), pvec.rend());

  for (int i = 0; i < 5; i++) {
    sum += pvec[i].first;
    indexvec.push_back(pvec[i].second);
  }

  sort(indexvec.begin(), indexvec.end());
  cout << sum << "\n";
  for (auto b : indexvec) {
    cout << b << " ";
  }

  return 0;
}
