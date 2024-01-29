#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  cin >> testcase;

  vector<int> vec;
  int result = 0;
  int temp = 0;
  int total = 0;
  for (int i = 0; i < testcase; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  sort(vec.begin(), vec.end());

  for (int i = 0; i < testcase; i++) {
    total += vec[i];
    result += total;
  }

  cout << result;
  return 0;
}