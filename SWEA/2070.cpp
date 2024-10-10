#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int t = 0;

pair<int, int> tmppair;

int main() {
  fastIo;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> tmppair.first >> tmppair.second;

    if (tmppair.first > tmppair.second) {
      cout << "#" << i + 1 << " " << ">" << "\
      n";
    } else if (tmppair.first == tmppair.second) {
      cout << "#" << i + 1 << " " << "=" << "\
      n";
    } else if (tmppair.first < tmppair.second) {
      cout << "#" << i + 1 << " " << "<" << "\
      n";
    }
  }
  return 0;
}
