#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long x = 0;

  char arr[3];

  arr[0] = 'S';
  arr[1] = 'U';
  arr[2] = 'O';

  cin >> x;

  cout << arr[(x % 3)] << "\n";

  return 0;
}