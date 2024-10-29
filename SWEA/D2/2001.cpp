#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int t = 0;
int n, m = 0;

int main() {
  fastIo;

  cin >> t;

  for (int i = 0; i < t; i++) {
    n, m = 0;

    cin >> n >> m;
    int arr[n][n];

    // 배열 입력 받기
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        cin >> arr[j][k];
      }
    }

    vector<int> vec;
    for (int j = 0; j < n; j += m) {
    }
  }

  return 0;
}