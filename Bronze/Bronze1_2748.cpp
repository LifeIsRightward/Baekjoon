#include <iostream>
#include <vector>
using namespace std;
// dp basic - 피보나치
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  vector<long long> vec(91, 0);
  vec[0] = 0;
  vec[1] = 1;

  // 미리 만들고 해당 인덱스의 값을 찾는 방식이 보편적임
  for (int i = 2; i < 91; i++) {
    vec[i] = vec[i - 1] + vec[i - 2];
  }

  cin >> n;
  cout << vec[n];
  return 0;
}
