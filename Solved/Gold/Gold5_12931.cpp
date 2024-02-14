#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int temp = 0;
  cin >> N;

  vector<int> A(N, 0);
  vector<int> B(N);

  for (auto& i : B) {
    cin >> i;
  }

  int cnt = 0;
  while (1) {
    int zero = 0;

    for (auto& i : B) {
      if (i % 2) {
        cnt++;
        i--;
      }
      if (i == 0) {
        zero++;
      }
    }

    if (zero == N) {
      break;
    }

    cnt++;

    for (auto& i : B) {
      i /= 2;
    }
  }

  cout << cnt << "\n";

  return 0;
}
