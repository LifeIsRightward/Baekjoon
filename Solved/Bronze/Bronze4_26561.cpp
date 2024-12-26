#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    long long p, t = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        p = 0;
        t = 0;

        cin >> p >> t;

        cout << p + ((t / 4) - (t / 7)) << "\n";
    }

    return 0;
}