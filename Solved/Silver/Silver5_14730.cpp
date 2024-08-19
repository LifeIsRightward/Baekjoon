#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
pair<int, int> tmp;
int cnt = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp.first >> tmp.second;
    cnt += tmp.first * tmp.second;
  }

  cout << cnt;
  return 0;
}
