#include <bits/stdc++.h>

using namespace std;

int testcase = 0;

long long n = 0;
unsigned long long s1;
unsigned long long s2;
unsigned long long s3;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int main() {

    fastIo;
    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> n;

        s1 = (n * (n + 1)) / 2;
        s2 = n * n;
        s3 = (n * (n + 1));

        cout << "#" << i + 1 << " " << s1 << " " << s2 << " " << s3 << "\n";
    }

    return 0;
}