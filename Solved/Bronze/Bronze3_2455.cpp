#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> vec;
    int a, b = 0;
    int tmp1, tmp2 = 0;

    for (int i = 0; i < 4; i++) {
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    tmp1 = vec[0].second - vec[1].first + vec[1].second;
    tmp2 = tmp1 - vec[2].first + vec[2].second;

    if (tmp1 > tmp2) {
        cout << tmp1;
    } else {
        cout << tmp2;
    }
    return 0;
}
