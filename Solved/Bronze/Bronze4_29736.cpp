#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d = 0;
    int left, right = 0;
    int cnt = 0;
    string str = "IMPOSSIBLE";

    cin >> a >> b;
    cin >> c >> d;

    left = c - d;
    right = c + d;

    for (int i = a; i <= b; i++) {
        if (i >= left && i <= right) {
            cnt++;
        }
    }

    if (cnt == 0) {
        cout << str;
    } else {
        cout << cnt;
    }

    return 0;
}
