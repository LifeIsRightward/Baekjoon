#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int n, total = 0;

int main() {
    fastIo;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        total += i;
    }

    cout << total;

    return 0;
}