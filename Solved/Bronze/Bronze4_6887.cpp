#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int n = 0;
int i = 1;
int brkpoint = 0;
bool brktype = false;
//  true 이면 딱 나눠 떨어지는거
//  false 이면 그 이상 갔다가 break 걸린거

int main() {
  fastIo;

  cin >> n;

  while (true) {
    if (i * i > n) {
      brktype = false;
      brkpoint = i;
      break;
    } else if (i * i == n) {
      brktype = true;
      brkpoint = i;
      break;
    }
    i++;
  }

  if (brktype) {
    cout << "The largest square has side length " << brkpoint << ".";
  } else {
    cout << "The largest square has side length " << brkpoint - 1 << ".";
  }

  return 0;
}
