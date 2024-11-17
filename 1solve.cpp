#include <iostream>

using namespace std;

int testcase = 0;
long long n = 0;
long long d = 0;
long long x = 0;

int main() {

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> n >> d >> x;

        long long arr[501] = {
            0,
        };

        int cnt[501] = {
            0,
        };

        for (int j = 1; j <= n; j++) {
            cin >> arr[j];
        }

        // cout << "#" << i + 1 << " ";

        for (int k = d;; k++) {
            if (cnt[d] == arr[d] && (k % n) == x) {
                cout << "cnt[d] = " << cnt[d] << "k%n : " << (k % n) << "\n";
                cnt[k % n]++;
                break;
            } else {
                cnt[(k % n) + 1]++;
                cout << "cnt[" << ((k % n) + 1) << "] = " << cnt[(k % n) + 1] << "\n";
            }
        }

        for (int q = 1; q <= n; q++) {
            cout << "cnt[" << q << "] : " << cnt[q] << "\n";
        }
    }

    return 0;
}

// if (arr[d] == 0) {
//     cout << n - (x - d) << "\n";
// } else {
//     if (d == x) {
//         cout << arr[d] * n << "\n";
//     } else if (d < x) {
//         cout << (x - d) + arr[d] * n << "\n";
//     } else if (d > x) {
//         cout << (d - x) + arr[d] * n << "\n";
//     }
// }