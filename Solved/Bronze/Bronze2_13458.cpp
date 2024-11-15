#include <bits/stdc++.h>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int n = 0;
int arr[1000001];
long long cnt = 0;

int b, c = 0;

int main() {
  fastIo;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  cin >> b >> c;

  for (int i = 1; i <= n; i++) {
    // 일단 총 감독관이 있고 없고
    if (arr[i] <= b) {
      cnt++;
    } else {
      // 일단 총 감독관 한 명 배치하고
      arr[i] -= b;
      cnt++;

      int tmp = arr[i] / c;

      if (arr[i] % c != 0) {
        cnt += tmp + 1;
      } else {
        cnt += tmp;
      }

      //   이게 시간초과 난 코드
      //   while (true) {
      //     if (arr[i] <= 0) {
      //       break;
      //     } else {
      //       arr[i] -= c;
      //       cnt++;
      //     }
      //   }
    }
  }

  cout << cnt;
  return 0;
}