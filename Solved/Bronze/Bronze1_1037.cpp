#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int cnt = 0;
  cin >> cnt;

  int temp = 0;
  int max = 0;
  int min = 0;
  vector<int> vec;

  for (int i = 0; i < cnt; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  max = *max_element(vec.begin(), vec.end());
  min = *min_element(vec.begin(), vec.end());

  cout << max * min;
  return 0;
}