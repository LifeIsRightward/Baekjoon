#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int stdTempNum = 0;
  vector<int> students;
  vector<int> found;
  for (int i = 0; i < 28; i++) {
    cin >> stdTempNum;
    students.push_back(stdTempNum);
  }

  sort(students.begin(), students.end());

  for (int i = 1; i <= 30; i++) {
    for (int j = 0; j < 28; j++) {
      if (i != students[j]) {
        cout << i << endl;
      }
    }
  }

  return 0;
}