#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // 10 의 갯수를 찾아야하니까 2와 5의 쌍이 몇개인지를 구하면 될거 같다.
  // 근데 2는 5보다 현저히 많으니까, 5의 갯수가 몇개인지만 구하면 될거같다.
  // 5의 배수 구하기 25의 배수 구하기 125의 배수구하기
  // 625는 N의 범위인 500을 초과하기때문에 더이상 구하지 않는다.
  // 5의 배수 + 25의 배수 + 125의 배수
  // 5의 배수에서 25와 125의 배수를 한번씩 구한다
  // 25의 배수에서 125의 배수를 한번씩 구한다.
  // 125의 배수에서 125의 배수를 또 구한다
  // 즉, 5의 배수 에 25의 배수와 125의 배수가 포함된 채로 한번씩 구해지니까
  // 25의 배수에서 한번만 구해도 2개의 5가 나올테고
  // 125또한 5와 25의 배수에서 각각 5,5 두번을 구해서 한번만 더 구해주면 된다.

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int cnt5 = 0;
  int cnt25 = 0;
  int cnt125 = 0;
  unsigned long long result = 1;
  cin >> N;

  cnt5 = N / 5;
  cnt25 = N / 25;
  cnt125 = N / 125;

  cout << cnt5 + cnt25 + cnt125;

  return 0;
}
