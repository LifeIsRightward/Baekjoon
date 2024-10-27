#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int p, k = 0;

int main() {
    fastIo;

    cin >> p >> k;
    cout << (p - k) + 1;
    return 0;
}