#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[101][101];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // memset(arr, 0, sizeof(int) * 101);
  int N = 0;
  int temp = 0;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cin >> temp;
      arr[i][j] = temp;
    }
  }

  for (int k = 1; k <= N; k++) {
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        if (arr[i][k] && arr[k][j]) {
          arr[i][j] = 1;
        }
      }
    }
  }

  // cout << "\n";

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
