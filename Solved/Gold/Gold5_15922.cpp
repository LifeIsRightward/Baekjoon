#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 스위핑 알고리즘
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  pair<int, int> v[100000];
  pair<long long, long long> temp;
  long long ans = 0;
  int N = 0;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> temp.first >> temp.second;
    v[i].first = temp.first;
    v[i].second = temp.second;
  }
  // 스위핑은 정렬된 상태에서 사용하는거임
  sort(v, v + N);

  //   for (int i = 0; i < N; i++) {
  //     cout << v[i].first << " : " << v[i].second << "\n";
  //   }

  int start = v[0].first;
  int end = v[0].second;

  for (int q = 0; q < N; q++) {
    if (v[q].first <= end) {  // 완전히 안겹치는지를 판단
      // 이 내부를 들어왔다는것은, 일단 겹친다는 뜻임(부분이든 전체이든)
      if (v[q].second > end) {  // 근데 기존의 end보다 더 크다면 -> 부분 겹침
        end = v[q].second;  // end를 수정
      }                     // 전체가 겹치는건 봐줄 필요도 없음.
    } else {                // 완전히 안겹치는 경우
      ans += end - start;
      start = v[q].first;
      end = v[q].second;
    }
  }
  // 3개의 경우의 수
  // 1. 일부분이 겹친다 -> end만 수정해줌
  // 2. 전혀 안겹친다. -> 기존의 start와 end를 통해 선분의 길이를 구하고
  // 답에 저장시켜준 후, 새로운 start와 end를 설정한다.
  // 3. 아예 겹친다 -> 볼 필요도 없다.
  ans += end - start;
  cout << ans;
  return 0;
}
