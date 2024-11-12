#include <bits/stdc++.h>

using namespace std;

int main() {

    int j = 1;
    bool reverse = true;

    long long n = 0;

    cin >> n;

    // int arr[n];

    for (int i = 1; i <= n; i++) {

        if (i % 4 == 1) {
            reverse = !reverse;
        }

        if (reverse) {
            // arr[i] = j--;
            j--;
        } else {
            // arr[i] = j++;
            j++;
        }
    }

    cout << j;
    return 0;
}