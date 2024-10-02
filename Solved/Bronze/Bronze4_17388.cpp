#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int tmp = 0;
vector<int> vec(3);
int total = 0;
int minLocation = 0;

int main() {
  fastIo;

  for (int i = 0; i < 3; i++) {
    cin >> tmp;
    vec[i] = tmp;
  }

  for (auto a : vec) {
    total += a;
  }

  if (total >= 100) {
    cout << "OK";
  } else {
    minLocation = min_element(vec.begin(), vec.end()) - vec.begin();
    if (minLocation == 0) {
      cout << "Soongsil";
    } else if (minLocation == 1) {
      cout << "Korea";
    } else if (minLocation == 2) {
      cout << "Hanyang";
    }
  }
  return 0;
}
