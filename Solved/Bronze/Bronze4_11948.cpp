#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int tmp, total = 0;
vector<int> farr;
vector<int> barr;

int main() {
  fastIo;

  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    farr.push_back(tmp);
  }

  for (int i = 0; i < 2; i++) {
    cin >> tmp;
    barr.push_back(tmp);
  }

  sort(farr.rbegin(), farr.rend());
  sort(barr.rbegin(), barr.rend());

  for (int i = 0; i < 3; i++) {
    total += farr[i];
  }

  total += barr[0];

  cout << total;

  return 0;
}
