#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, temp = 0;
  string str;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    cin >> str;
    string newstring;
    for (int j = 0; j < str.length(); j++) {
      for (int q = 0; q < temp; q++) {
        newstring.push_back(str[j]);
      }
    }
    cout << newstring << "\n";
  }

  return 0;
}
