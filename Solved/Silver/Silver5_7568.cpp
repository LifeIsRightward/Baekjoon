#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 자기보다 큰 사람의 수를 카운트해주면 되는 문제.
  // 그게 "덩치가 크다"의 정의니까(이 문제에서)
  int N = 0;
  pair<int, int> ptemp;
  vector<pair<int, int>> pvec;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> ptemp.first >> ptemp.second;
    pvec.push_back(ptemp);
  }

  for (int j = 0; j < N; j++) {
    int tempscore = 1;
    for (int q = 0; q < N; q++) {
      if (pvec[j].first < pvec[q].first && pvec[j].second < pvec[q].second) {
        tempscore++;
      }
    }
    cout << tempscore << " ";
  }

  return 0;
}
