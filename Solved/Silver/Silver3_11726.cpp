#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define mod 10007
using namespace std;

vector<long long> dp(10000001, 0);
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp = 0;
  cin >> temp;

  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= temp; i++) {
    dp[i] = (dp[i - 2] + dp[i - 1]) % mod;
  }

  cout << dp[temp];
  return 0;
}
