#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int n = 0;
int i = 0;
vector<string> vec;

int main() {
  fastIo;

  vec.push_back("ABCDEFGHJLM");
  vec.push_back("ACEFGHILM");
  vec.push_back("ACEFGHILM");
  vec.push_back("ABCEFGHLM");
  vec.push_back("ACEFGHLM");
  vec.push_back("ACEFGHLM");
  vec.push_back("ACEFGHLM");
  vec.push_back("ACEFGHLM");
  vec.push_back("ACEFGHLM");
  vec.push_back("ABCFGHLM");

  cin >> n;

  cout << vec[n - 1].length() << "\n";
  for (auto a : vec[n - 1]) {
    cout << a << " ";
  }
  return 0;
}
