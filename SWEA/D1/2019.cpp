#include <cmath>
#include <iostream>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int n = 0;

int main() {
    fastIo;

    cin >> n;

    for (int i = 0; i <= n; i++) {
        cout << pow(2, i) << " ";
    }
    return 0;
}