#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  vector<int> vec(10, 0);
  int A = 0;
  int B = 0;
  int C = 0;
  int cnt = 0;
  long long result = 0;

  cin >> A >> B >> C;
  result = A * B * C;
  str = to_string(result);

  for (int i = 0; i < str.length(); i++) {
    vec[str[i] - '0']++;
  }

  for (auto a : vec) {
    cout << a << "\n";
  }

  return 0;
}
