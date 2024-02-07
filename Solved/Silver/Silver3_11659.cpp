#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M = 0;
  int temp = 0;
  cin >> N >> M;

  pair<int, int> temppair;
  vector<int> ivec(N + 1, 0);
  int resulttemp = 0;

  for (int i = 1; i <= N; i++) {
    cin >> temp;
    ivec[i] = temp;
  }

  vector<int> resultvec(N + 1, 0);
  for (int j = 1; j <= N; j++) {
    resultvec[j] = resultvec[j - 1] + ivec[j];
  }

  for (int i = 1; i <= M; i++) {
    cin >> temppair.first >> temppair.second;

    cout << resultvec[temppair.second] + ivec[temppair.first] -
                resultvec[temppair.first]
         << "\n";
  }

  return 0;
}
