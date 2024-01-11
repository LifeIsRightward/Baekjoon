#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // Use the algorithm header's method -> *min_element(v.begin(), v.end())
  // *max_element(v.begin(), v.end())
  int count, temp = 0;
  vector<int> vec;

  cin >> count;
  for (int i = 0; i < count; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  cout << *min_element(vec.begin(), vec.end()) << " "
       << *max_element(vec.begin(), vec.end());

  return 0;
}
