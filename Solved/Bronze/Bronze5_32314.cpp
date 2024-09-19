#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int a, w, v = 0;

int main() {

    fastIo;

    cin >> a;
    cin >> w >> v;

    if (a <= w / v) {
        cout << "1";
    } else {
        cout << "0";
    }
}
