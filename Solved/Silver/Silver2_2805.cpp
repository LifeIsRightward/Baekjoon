#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long n, m = 0;
long long h = 0;
int trees[1000001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> trees[i];
  }

  // 이분 탐색은 정렬이 선행되어야 진행가능하다.
  sort(trees, trees + n);

  // 가장 낮고, 큼은 나무의 높이가 들어있는 trees 배열의 sort로써 맨 앞, 맨 뒤가
  // 나무의 min 높이, max 높이를 보장한다.

  // 가장 낮은 나무의 높이(0)
  long long low = 0;
  // 가장 큰 나무의 높이(마지막 인덱스)
  long long high = trees[n - 1];

  while (low <= high) {
    long long sum = 0;

    // 중간 값(midle value)을 의미함. 이걸 앞으로 조절해나가면서 이분탐색을
    // 진행할 거임.(현재 톱의 길이)
    long long cut = (low + high) / 2;

    // 전체 나무를 돌면서 구해지는 떨궈진 나무들의 합.
    for (int i = 0; i < n; i++) {
      // 해당 나무에서 중간값(Cut할 전기톱의 높이)을 빼줬을 때 떨어지는 위에
      // 나무들의 길이가 0 보다 크다면
      if (trees[i] - cut > 0) {
        // 해당 나무에서 떨어진 나무 길이만큼 sum에 더해줌.
        sum += trees[i] - cut;
      }
    }

    // 현재 cut(중간값)을 기준으로 잘려나간 나무를 다 주웠을때,
    // 내가 가져가야할 나무의 양 보다 많다고 하면
    if (sum >= m) {
      // 그 전기톱의 높이를 최대지점으로 저장하고
      h = cut;
      // 자르는 높이의 최소를 + 1
      low = cut + 1;
    } else {
      // 내가 가져가야 할 m미터의 나무가 모이지 않았다면,
      // 자르는 높이의 최대를 - 1
      high = cut - 1;
    }
  }

  cout << h;
  return 0;
}
