#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int tmp, total = 0;

int main() {
    fastIo;

    while (true) {
        cin >> tmp;
        if (tmp == -1) {
            cout << total;
            break;
        } else {
            total += tmp;
        }
    }
    return 0;
}
