#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int n = 0;

int contain(int arr[], int len, int n) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == n) return i;
  }
  return -1;
}

int main() {
  fastIo;

  cin >> n;

  int arr[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    arr[i] = i;
    sum += i;
  }

  arr[n - 1] += sum % n;
  sum += sum % n;

  int max = arr[n - 1];
  while (contain(arr, n, sum / n) != -1) {
    int index = contain(arr, n, sum / n);
    while (arr[index] <= max) {
      arr[index] += n;
      sum += n;
    }
    max = arr[index];
  }

  int last = sum / n;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << last << "\n";

  return 0;
}
