#include <iostream>
using namespace std;

int main() {
  int n, m, b;
  cin >> n >> m >> b;

  int arr[501][501];
  int ans = 99999999;
  int ansHeight = -1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int h = 0; h <= 256; h++) {
    int inven = 0;
    int remove = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int minus = arr[i][j] - h;

        if (minus < 0) {
          inven -= minus;
        } else if (minus > 0) {
          remove += minus;
        }
      }
    }

    if (remove + b >= inven) {
      int count = (2 * remove) + inven;

      if (ans >= count) {
        ans = count;
        ansHeight = h;
      }
    }
  }

  cout << ans << " " << ansHeight;
}

// #include <algorithm>
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// vector<vector<int>> vec;
// vector<int> v;
// long long B = 0;
// int H = 0;
// int Time = 0;

// void dig(int x, int y);
// void bulid(int x, int y);

// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   vec.push_back(v);
//   int N, M, temp = 0;

//   cin >> N >> M >> B;

//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < M; j++) {
//       cin >> temp;
//       vec[i].push_back(temp);
//     }
//   }

//   return 0;
// }

// void dig(int x, int y) {
//   vec[x][y]--;
//   B++;
//   Time += 2;
// }

// void bulid(int x, int y) {
//   vec[x][y]++;
//   B--;
//   Time++;
// }
