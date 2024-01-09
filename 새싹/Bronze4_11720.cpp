#include <iostream>
#include <string>
#include <vector>
using namespace std;
// char to i (string index[i] = '0' -> c to i casting)
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int count, result = 0;
  string input;

  cin >> count;
  cin >> input;
  for (int i = 0; i < count; i++) {
    result += input[i] - '0';
  }

  cout << result;
  return 0;
}
