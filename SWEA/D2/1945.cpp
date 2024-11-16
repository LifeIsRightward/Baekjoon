#include <bits/stdc++.h>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int testcase = 0;
int num = 0;
int a, b, c, d, e;
int main() {
    fastIo;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> num;

        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;

        while (num != 1) {
            if (num % 2 == 0) {
                a++;
                num /= 2;
            } else if (num % 3 == 0) {
                b++;
                num /= 3;
            } else if (num % 5 == 0) {
                c++;
                num /= 5;
            } else if (num % 7 == 0) {
                d++;
                num /= 7;
            } else if (num % 11 == 0) {
                e++;
                num /= 11;
            }
        }

        cout << "#" << i + 1 << " " << a << " " << b << " " << c << " " << d << " " << e << "\n";
    }
    return 0;
}