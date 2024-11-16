#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int n, m = 0;
int cnt = 0;
vector<int> vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> n >> m;

    int arr[n][n];

    vec.clear();

    // N by N 배열 입력 받기
    for (int j = 0; j < n; j++) {
      for (int q = 0; q < n; q++) {
        cin >> arr[j][q];
      }
    }

    for (int i = 0; i <= n - m; i++) {
      for (int j = 0; j <= n - m; j++) {
        for (int k = i; k < m + i; k++) {
          for (int v = j; v < m + j; v++) {
            cnt += arr[k][v];
          }
        }

        vec.push_back(cnt);
        cnt = 0;
      }
    }

    int maxval = *max_element(vec.begin(), vec.end());
    cout << "#" << i + 1 << " " << maxval << "\n";

    // for (auto a : vec) {
    //   cout << a << "\n";
    // }
  }

  return 0;
}