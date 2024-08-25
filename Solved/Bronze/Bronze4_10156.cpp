#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int a, b, total = 0;

int main() {
    fastIo;

    cin >> a >> b >> total;

    if ((a * b) - total <= 0) {
        cout << "0";
    } else {
        cout << (a * b) - total;
    }

    return 0;
}
