#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> nvec;
  int vecsize = 0;
  int x, a = 0;

  cin >> vecsize >> x;
  for (int i = 0; i < vecsize; i++) {
    cin >> a;
    if (a < x) {
      nvec.push_back(a);
      cout << a << " ";
    }
  }

  //   for (auto a : nvec) {
  //     cout << a << endl;
  //   }

  return 0;
}