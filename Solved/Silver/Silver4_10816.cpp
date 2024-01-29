#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  int temp = 0;
  cin >> testcase;

  map<int, int> mapparr;

  for (int i = 0; i < testcase; i++) {
    cin >> temp;
    mapparr[temp]++;
    // 특이하지만 이런 방법도 가능하다. key : temp인 원소가 없으므로
    // 생성한뒤, 기본값(value) : 0 에서 1을 더해준다.
  }

  int M = 0;
  cin >> M;

  for (int i = 0; i < M; i++) {
    cin >> temp;
    cout << mapparr[temp] << " ";
  }
  return 0;
}