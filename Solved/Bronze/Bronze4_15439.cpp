#include <iostream>
#include <vector>
using namespace std;

int n = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  cout << n * (n - 1);

  return 0;
}
