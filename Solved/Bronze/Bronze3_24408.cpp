#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 0;
int top = 0;
int standard, tmp = 0;
bool flag = false;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  cin >> standard;
  flag = true;

  for (int i = 0; i < n - 1; i++) {
    cin >> tmp;
    if (flag) {
      if (tmp % standard == 0) {
        cout << tmp << "\n";
        flag = false;
      }
    } else {
      standard = tmp;
      flag = true;
    }
  }

  return 0;
}
