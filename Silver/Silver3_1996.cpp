#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

// 이 문제의 기본로직은 pair로 인덱스, 중요도를 원본배열에 넣고
// 우선순위큐를 사용해서 우선순위를 관리한다.
// 우선순위 큐와 원본배열의 우선순위가 같다면, 출력하고 ++count 후에 pop을 진행.
// 다르다면 그대로 pop후에 뒤로 보낸다.
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int count = 0;
  int test_case;
  cin >> test_case;

  int n, m, ipt;  // 문서의 개수, 궁금한 문서 위치, 중요도

  for (int i = 0; i < test_case; ++i) {
    count = 0;
    cin >> n >> m;

    queue<pair<int, int>> q;
    priority_queue<int> pq;  // 우선순위 큐

    for (int j = 0; j < n; ++j) {
      cin >> ipt;
      q.push({j, ipt});  // 순서에 맞는, 중요도임 <순서, 중요도>
      pq.push(ipt);      // 우선순위큐에 중요도를 넣는다.
    }

    while (!q.empty()) {
      int index = q.front().first;
      // <순서, 중요도> 큐의 첫번째 인자를 index(순서)로 저장
      int value = q.front().second;
      // <순서, 중요도> 큐의 두번째 인자를 value(중요대)로 저장
      q.pop();
      // 맨 앞의 요소는 분리되어 임시 저장해놓고, 큐의 맨 앞 요소를 pop한다.

      // 우선순위큐는 우선순위가 높은 순서대로 정렬되어있다.(pop을해도 다음으로
      // 높은 원소가 top을 유지한다.) 우선순위 큐에서의 top은 우선순위가 높은
      // 원소를 반환한다.
      if (pq.top() == value) {
        // 우선순위 큐에서 가장 우선순위가 높은 원소가 value이면
        pq.pop();
        // 우선순위 큐에서 pop하고 count를 +1을한다.
        //(출력된거임)
        ++count;

        if (index == m) {
          // 근데 그게 우리가 알고싶은 순서의(위치)의 것이라면
          // 출력하고, break
          cout << count << endl;
          break;
        }
      } else
        // 가장 큰 값이 아니라면, 그냥 뒤로 보냄.(그대로)
        // 순서를 그래로 밀어서 뒤로 보낸거임 ㅇㅇ
        q.push({index, value});
    }
  }

  return 0;
}