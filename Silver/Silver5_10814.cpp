#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int TestCase = 0;
  cin >> TestCase;
  vector<pair<int, string>> p_is;
  pair<int, string> temp;

  for (int i = 0; i < TestCase; i++) {
    cin >> temp.first >> temp.second;
    p_is.push_back(temp);
  }

  stable_sort(p_is.begin(), p_is.end(), comp);

  for (auto a : p_is) {
    cout << a.first << " " << a.second << "\n";
  }

  return 0;
}

// 모든 sort에 대해 첫 번째인 int만을 고려하여 정렬하겠다.
// string은 비교하지 않겠다! 라는 함수 표현임.
// 애초에 a와 b의 first인 int로만 분류를 해놓고
// 그 들어온 순서에 대해서는 보장받는다.
// int(pair에서 first인)로써의 크다, 작다의 관계만 보겠다는 거 같음 ㅇㅇ
bool comp(pair<int, string> a, pair<int, string> b) {
  return a.first < b.first;
}
