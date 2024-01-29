#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp, maxindex, maxvalue = 0;
  vector<int> vec;
  for (int i = 0; i < 9; i++) {
    cin >> temp;
    vec.push_back(temp);
  }
  maxindex = (max_element(vec.begin(), vec.end()) - vec.begin()) + 1;
  maxvalue = *max_element(vec.begin(), vec.end());
  //*max_element 는 value를,
  // 그냥 max_element는 이터레이터(해당 위치를 반환하는듯)를 리턴한다.
  // 그래서 max_elemment 는 시작 위치를 빼줘야 사용이 가능한듯 하다.

  cout << maxvalue << "\n";
  cout << maxindex;
  return 0;
}
