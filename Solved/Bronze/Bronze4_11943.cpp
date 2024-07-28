#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int A1, A2, B1, B2 = 0;
int cnt1, cnt2 = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> A1 >> B1 >> A2 >> B2;

    cnt1 = A1 + B2;
    cnt2 = A2 + B1;

    cout << min(cnt1, cnt2);
    return 0;
}
