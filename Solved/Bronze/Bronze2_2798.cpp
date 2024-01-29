#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// 브루트 포스
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M = 0;
  vector<int> vec(100, 0);
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    cin >> vec[i];
  }

  int card;
  int maxSet = 0;

  // 카드가 겹치면 안되기에, for문 영역을 나눠준듯
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        card = vec[i] + vec[j] + vec[k];
        if (card <= M && maxSet < card) {
          maxSet = card;
        }
      }
    }
  }

  cout << maxSet;
  return 0;
}
