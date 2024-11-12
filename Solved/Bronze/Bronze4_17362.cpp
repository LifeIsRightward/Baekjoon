#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int finger = n % 8;

    // 8로 나눈 나머지 값에 따라 손가락 번호 결정
    if (finger == 1) {
        cout << 1;
    } else if (finger == 2 || finger == 0) {
        cout << 2;
    } else if (finger == 3 || finger == 7) {
        cout << 3;
    } else if (finger == 4 || finger == 6) {
        cout << 4;
    } else if (finger == 5) {
        cout << 5;
    }

    return 0;
}
