#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;

  while (getline(cin, str)) {
    cout << str << "\n";
  }

  return 0;
}
