#include <bits/stdc++.h>

using namespace std;

int main() {
  // FastIO

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> vec;

  int tmp1, tmp2, tmp3;
  cin >> tmp1 >> tmp2 >> tmp3;
  vec.push_back(tmp1);
  vec.push_back(tmp2);
  vec.push_back(tmp3);

  sort(vec.rbegin(), vec.rend());

  cout << vec[0] + vec[1] << "\n";

  return 0;
}