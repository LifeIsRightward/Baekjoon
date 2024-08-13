#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 시발 long long 안써서 틀림 ㅜ
    long long n = 0;

    cin >> n;

    if (n % 2 == 0) {
        cout << "CY";
    } else {
        cout << "SK";
    }
    return 0;
}
