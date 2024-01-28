#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, cnt = 0;
    int temp = 0;
    cin >> N >> K;
    vector<int> Money;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        Money.push_back(temp);
    }

    while (K) {
        if (K >= Money[N - 1]) {
            cnt++;
            K -= Money[N - 1];
        } else {
            N--;
        }
    }

    cout << cnt;
    return 0;
}
