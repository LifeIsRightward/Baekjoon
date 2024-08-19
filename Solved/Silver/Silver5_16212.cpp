#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

vector<int> vec;
int tmp;
int n = 0;

int main() {
  fastIo;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    vec.push_back(tmp);
  }

  sort(vec.begin(), vec.end());

  for (auto a : vec) {
    cout << a << " ";
  }
  return 0;
}
