#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long N, temp;
  cin >> N;

  vector<long long> vec(N);
  for (long long i = 0; i < N; i++) {
    cin >> temp;
    vec[i] = temp;
  }

  sort(vec.begin(), vec.end());

  for (auto a : vec) {
    cout << a << "\n";
  }
  return 0;
}
