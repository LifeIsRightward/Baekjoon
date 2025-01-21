#include <bits/stdc++.h>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int main() {
    fastIo;
    double area = 0;
    cin >> area;

    double pi = 3.141592;

    double rad = 0;

    rad = sqrt(area / pi);

    cout.fixed;
    cout.precision(9);
    cout << rad * 2 * pi;

    return 0;
}