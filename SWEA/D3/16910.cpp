#include <bits/stdc++.h>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int testcase = 0;
int n = 0;
long long cnt;
int main() {
    fastIo;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> n;
        cnt = 0;
        for (int i = -n; i <= n; i++) {
            for (int j = -n; j <= n; j++) {
                if (pow(i, 2) + pow(j, 2) <= pow(n, 2)) {
                    cnt++;
                }
            }
        }

        cout << "#" << i + 1 << " " << cnt << "\n";
    }

    return 0;
}