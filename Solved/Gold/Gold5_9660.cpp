#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n = 0;
  cin >> n;

  if (n % 7 == 0 || n % 7 == 2) {
    cout << "CY" << "\n";
  } else {
    cout << "SK" << "\n";
  }
  return 0;
}
