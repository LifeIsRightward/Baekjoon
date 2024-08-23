#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int total, totalsum = 0;
int n, a, b = 0;

int main() {
    fastIo;

    cin >> total;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        totalsum += a * b;
    }

    if (total == totalsum) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
