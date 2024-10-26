#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int n, tmp = 0;
vector<int> vec;

int main() {
    fastIo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    cout << vec[floor(n / 2)];

    return 0;
}