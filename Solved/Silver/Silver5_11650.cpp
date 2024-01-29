#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;

  cin >> testcase;
  pair<int, int> temp;
  vector<pair<int, int>> vec;

  //  입력받기
  for (int i = 0; i < testcase; i++) {
    cin >> temp.first >> temp.second;
    vec.push_back(temp);
  }
  // pair 는 자료형이다.
  // pair sort는 앞을 먼저 보고, 뒤에를 정렬한다.
  sort(vec.begin(), vec.end());

  for (auto a : vec) {
    cout << a.first << " " << a.second << "\n";
  }
  return 0;
}
