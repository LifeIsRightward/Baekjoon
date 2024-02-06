#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[110][110];
int minvalue = 9999999;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M = 0;
  int temp1, temp2 = 0;
  cin >> N >> M;

  fill(&arr[0][0], &arr[101][101], minvalue);
  for (int i = 0; i < M; i++) {
    cin >> temp1 >> temp2;
    arr[temp1][temp2] = 1;
    arr[temp2][temp1] = 1;
  }

  for (int k = 1; k <= N; k++) {
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        if (arr[i][k] + arr[k][j] < arr[i][j]) {
          arr[i][j] = arr[i][k] + arr[k][j];
        }
      }
    }
  }

  // cout << "\n";

  int sum;
  int answer = 0;

  for (int i = 1; i <= N; i++) {
    sum = 0;
    for (int j = 1; j <= N; j++) {
      sum += arr[i][j];
    }
    if (minvalue > sum) {
      answer = i;
      minvalue = sum;
    }
  }

  cout << answer;

  return 0;
}
