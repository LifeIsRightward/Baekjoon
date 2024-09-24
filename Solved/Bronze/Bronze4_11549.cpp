#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int a, tmp, score = 0;

int main() {
  fastIo;

  cin >> a;

  for (int i = 0; i < 5; i++) {
    cin >> tmp;
    if (a == tmp) {
      score++;
    }
  }

  cout << score;
  return 0;
}
