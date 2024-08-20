#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int a, b = 0;
long long tmp = 0;
int common = 0;

vector<int> veca;
vector<int> vecb;

set<int> seta;
set<int> setb;
set<int> unionset;

// 이건 다시 공부하고 글 써야할듯
// 처음에 브루트포스로 돌렸는데, 시간 터졌었음 ㅇㅇ
// 그래서 set을 쓴건데.. 무튼 이거 정리해서 해야함
int main() {
  fastIo;
  cin >> a >> b;

  for (int i = 0; i < a; i++) {
    cin >> tmp;
    veca.push_back(tmp);
  }

  for (int j = 0; j < b; j++) {
    cin >> tmp;
    vecb.push_back(tmp);
  }

  seta.insert(veca.begin(), veca.end());
  setb.insert(vecb.begin(), vecb.end());

  set_union(seta.begin(), seta.end(), setb.begin(), setb.end(),
            inserter(unionset, unionset.begin()));

  cout << (unionset.size() - a) + (unionset.size() - b);
  return 0;
}
