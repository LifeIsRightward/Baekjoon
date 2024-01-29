#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  pair<int, int> vp[1000001];
  pair<int, int> temppair;
  int ans = 0;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> temppair.first >> temppair.second;
    vp[i].first = temppair.first;
    vp[i].second = temppair.second;
  }

  sort(vp, vp + N);
  long long start = vp[0].first;
  long long end = vp[0].second;

  for (int i = 1; i < N; i++) {
    if (vp[i].first <= end) {
      if (vp[i].second > end) {
        end = vp[i].second;
      }
    } else {
      ans += end - start;
      start = vp[i].first;
      end = vp[i].second;
    }
  }

  // 마지막 선분 처리
  ans += end - start;
  cout << ans;
  return 0;
}
