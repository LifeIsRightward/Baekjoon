#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int a, b, c = 0;

int main() {
    fastIo;

    cin >> a;
    cin >> b;
    cin >> c;

    if ((1 * a) + (2 * b) + (3 * c) >= 10) {
        cout << "happy";
    } else {
        cout << "sad";
    }
    return 0;
}
