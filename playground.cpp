#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int main() {
    fastIo;

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        set<int> seen;
        int cnt = 0;
        int crtnum = 0;

        while (seen.size() < 10) {
            cnt++;
            crtnum = N * cnt;

            int tmp = crtnum;
            while (tmp > 0) {
                seen.insert(tmp % 10);
                tmp /= 10;
            }
        }

        cout << "#" << t << " " << crtnum << endl;
    }

    return 0;
}
