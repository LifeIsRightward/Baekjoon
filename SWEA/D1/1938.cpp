#include <cmath>
#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

double a, b = 0;

int main() {
    fastIo;

    cin >> a >> b;

    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    // 소수점 밑에는 버려버려 ㅇㅇ
    cout << floor(a / b) << "\n";

    return 0;
}