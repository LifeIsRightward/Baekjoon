#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int a, b, c, d = 0;
int total = 0;
int m, s = 0;

int main() {
    fastIo;

    cin >> a >> b >> c >> d;

    total = a + b + c + d;

    m = total / 60;
    s = total % 60;

    cout << m << "\n" << s;
    return 0;
}
