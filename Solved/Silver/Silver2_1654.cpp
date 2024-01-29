#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int K, N = 0;
  // K -> 가지고 있는 랜선의 갯수
  // N -> 필요로하는 랜선의 갯수
  unsigned long long left, right, mid, result = 0;
  // left -> 좌측 포인터, right -> 우측 포인터, mid -> 중앙 포인터
  // result -> 최대 랜선의 길이
  long long temp = 0;
  // 입력되는 랜선의 길이들
  vector<long long> vec;

  cin >> K >> N;

  for (int i = 0; i < K; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  left = 1;  // left 포인터 -> 최소 '1'
  right = *max_element(vec.begin(), vec.end());
  // right 포인터 -> 가장 큰 값

  // Left 포인터보다 right 포인터가 더 우측에 있거나, 겹칠때까지
  while (left <= right) {
    mid = (left + right) / 2;
    // mid 포인터는 "left + right / 2"
    long long sum = 0;
    // while문 마다 구해지는, 랜선의 갯수
    // 즉, legt, right가 변할때마다 다르게 구해지는 랜선의 갯수

    // 입력 받은 K개의 랜선을 탐색하면서 mid의 값으로 나누면서
    // 만들 수 있는 랜선의 갯수와 그때의, mid값을 구하는 중
    // 802, 743, 457, 539를 mid값인 401로 나누면
    // 2 + 1 + 1 + 1 -> 5개
    // 11개에 훨씬 못미치는 갯수이다.
    // 그럼 mid - 1 값을 right 로 지정하여 범위를 재 설정하고
    // 다시 num을 구한다.
    for (int i = 0; i < K; i++) {
      sum += (vec[i] / mid);
      // 만들 수 있는 랜선의 갯수의 합 -> sum
    }

    if (sum >= N) {
      // 지금 만들 수 있는 랜선의 갯수의 합이, 필요로하는 갯수 N보다 같거나 크면
      result = mid;
      left = mid + 1;
      // 점점 범위를 좁혀감(최적의 랜선 길이가 나올때 까지)
      // 설령 sum 값이 N을 만족한다 한들, 가장 긴 랜선의 길이를 출력해야한다.
      // 그래서 left와 right가 같아지는 지점까지 구하면, 최적의 가장 긴 랜선의
      // 길이를 구할 수 있다.
    } else {
      right = mid - 1;
    }
  }

  cout << result;
  return 0;
}
