#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<long long> vec;
  long long N = 0;
  int temp = 0;

  cin >> N;
  for (long long i = 0; i < N; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  sort(vec.begin(), vec.end());

  for (auto a : vec) {
    cout << a << "\n";
  }

  return 0;
}
