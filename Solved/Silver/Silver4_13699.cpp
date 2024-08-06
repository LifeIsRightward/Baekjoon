#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    long long arr[36] = {0};
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 5;

    cin >> n;

    if (n <= 3) {
        cout << arr[n];
    } else {
        for (int i = 4; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                arr[i] += arr[j] * arr[i - j - 1];
                // cout << arr[i] << " = " << arr[j] << " * " << arr[i - j - 1] << "\n";
            }
        }
        cout << arr[n];
    }

    return 0;
}
