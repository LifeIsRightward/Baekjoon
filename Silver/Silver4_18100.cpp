#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long N = 0;
  int temp = 0;
  double diff = 0;  // 난이도
  int trimmed = 0;  // 절사평균 반올림 값
  vector<int> vec;
  cin >> N;

  if (N == 0) {  // 아직 아무 의견이 없다면, 문제의 난이도는 0으로 결정한다.
    cout << diff;
    return 0;
  }

  for (int i = 0; i < N; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  sort(vec.begin(), vec.end());
  //   cout << "=================="
  //        << "\n";
  //   for (auto a : vec) {
  //     cout << a << "\n";
  //   }
  //   cout << "=================="
  //        << "\n";

  // 내림함수 floor를 이용한 반올림 함수 구현
  trimmed = floor((vec.size() * 0.15) + 0.5);

  // 절사 평균 구현
  vec.erase(vec.begin(), vec.begin() + trimmed);
  vec.erase(vec.end() - trimmed, vec.end());

  //   for (auto a : vec) {
  //     cout << a << "\n";
  //   }
  //   cout << "=================="
  //        << "\n";

  for (auto a : vec) {
    diff += a;
  }

  //   cout << diff / vec.size() << "\n";
  //   cout << (diff / vec.size()) + 0.5 << "\n";
  diff = floor((diff / vec.size()) + 0.5);

  cout << diff;

  return 0;
}

// 5 5 7 -> 17 -> 17 / 3 -> 5.6 -> 6
// 10명의 15 %->1.5명->반올림 2명 최상위 2명 15, 16 배제 , 최하위 2명 배제  1, 3
// 12 12 13 13 14 15의 평균
// 79 / 6 -> 13.166666(반올림) -> 13

// 1 3 12 12 13 13 14 15 15 16