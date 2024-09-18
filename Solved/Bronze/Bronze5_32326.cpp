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

    cin >> a >> b >> c;

    cout << (3 * a) + (4 * b) + (5 * c);
}
