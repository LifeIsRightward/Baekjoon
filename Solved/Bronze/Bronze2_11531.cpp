#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[26] = {0};

  int minute = 0;
  char problem_name;
  string iscorrect;

  int panalty = 0;
  int solved = 0;

  while (true) {
    cin >> minute;

    if (minute == -1) {
      break;
    }

    cin >> problem_name >> iscorrect;

    if (iscorrect == "wrong") {
      arr[problem_name - 'A']++;
    } else {
      solved++;
      panalty += minute + (arr[problem_name - 'A'] * 20);
    }
  }

  cout << solved << " " << panalty;

  return 0;
}