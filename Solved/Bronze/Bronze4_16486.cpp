#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int a, b = 0;
double pi = 3.141592;

int main() {
    fastIo;

    cin >> a >> b;
    cout << fixed;
    cout.precision(6);

    cout << (2 * a) + (2 * b * pi);

    return 0;
}