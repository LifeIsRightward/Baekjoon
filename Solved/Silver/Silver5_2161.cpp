#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

queue<int> q;
vector<int> result;
int lastcard = 0;
void act1() {
  result.push_back(q.front());
  q.pop();
}
void act2() {
  int temp = q.front();
  q.push(temp);
  q.pop();
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  while (true) {
    if (q.size() > 1) {
      act1();
    } else {
      break;
    }
    if (q.size() > 1) {
      act2();
    } else {
      break;
    }
  }

  for (auto a : result) {
    cout << a << " ";
  }

  cout << q.front();
  return 0;
}
