#include <iostream>
#include <vector>
using namespace std;
// GCD, LCM

int GCD(int a, int b);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b = 0;
  int mx = 0;
  int mn = 0;
  int gcd, lcm = 0;

  cin >> a >> b;
  mx = max(a, b);
  mn = min(a, b);

  gcd = GCD(mx, mn);
  lcm = a * b / gcd;
  cout << gcd << "\n";
  cout << lcm;
  return 0;
}

int GCD(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}
