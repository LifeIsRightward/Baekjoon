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

int n = 0;
vector<int> vec;

int main() {
    fastIo;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            vec.push_back(i);
        }
    }

    sort(vec.begin(), vec.end());

    for (const auto a : vec) {
        cout << a << " ";
    }

    return 0;
}