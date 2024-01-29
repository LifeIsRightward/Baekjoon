#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, temp;
  cin >> N;

  vector<int> vec(10001, 0);
  for (int i = 0; i < N; i++) {
    cin >> temp;
    vec[temp]++;
  }

  // for (int i = 1; i <= N; i++) {
  //   cout << i << " : " << vec[i] << "\n";
  // }

  // cout << "-------" << endl;
  for (int i = 1; i <= vec.size(); i++) {
    if (vec[i] != 0) {
      for (int j = 0; j < vec[i]; j++) {
        cout << i << "\n";
      }
    }
  }
  return 0;
}
