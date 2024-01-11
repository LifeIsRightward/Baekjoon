#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp = 0;
  cin >> temp;

  for (int i = 0; i < temp; i++) {
    for (int j = 0; j < temp; j++) {
      if (j < temp - (i + 1)) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }
  return 0;
}
