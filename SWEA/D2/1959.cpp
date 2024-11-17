#include <bits/stdc++.h>

using namespace std;

int n, m = 0;
int testcase = 0;
int ai, bj;
int tmp = 0;
int multiple = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> ai >> bj;

        int aii[21] = {
            0,
        };
        for (int a = 1; a <= ai; a++) {
            cin >> aii[a];
        }

        int bjj[21] = {
            0,
        };
        for (int b = 1; b <= bj; b++) {
            cin >> bjj[b];
        }

        int lval = max(ai, bj);
        int sval = min(ai, bj);

        vector<int> vec;
        if (lval == ai) {
            for (int q = 1; q <= lval; q++) {
                if ((q % sval) == 0) {
                    vec.push_back(multiple);
                    multiple = 0;
                }
                multiple += aii[q] * bjj[q % sval];
            }
        } else {
        }
    }

    return 0;
}