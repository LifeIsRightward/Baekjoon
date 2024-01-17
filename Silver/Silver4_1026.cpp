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
  int total = 0;

  vector<int> vecA;
  vector<int> vecB;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    vecA.push_back(temp);
  }
  for (int i = 0; i < N; i++) {
    cin >> temp;
    vecB.push_back(temp);
  }

  sort(vecA.rbegin(), vecA.rend());
  sort(vecB.begin(), vecB.end());

  for (int i = 0; i < N; i++) {
    total += vecA[i] * vecB[i];
  }

  cout << total;

  return 0;
}
