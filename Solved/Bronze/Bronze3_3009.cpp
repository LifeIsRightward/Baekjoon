#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<pair<int, int>> vec;
    pair<int, int> tmp;

    for (int i = 0; i < 3; i++) {
        cin >> tmp.first >> tmp.second;
        // vec.push_back(make_pair(tmp.first, tmp.second));
        vec.push_back(tmp);
    }

    bool flagx = false;
    bool flagy = false;

    int x = vec[0].first;
    int y = vec[0].second;

    // cout << x << " " << y << "\n";

    for (int i = 1; i < 3; i++) {
        if (x == vec[i].first) {
            flagx = true;
        }
        if (y == vec[i].second) {
            flagy = true;
        }
    }

    int rx, ry = 0;

    if (flagx) {
        for (auto b : vec) {
            if (x != b.first) {
                rx = b.first;
                break;
            }
        }
    } else {
        rx = x;
    }

    if (flagy) {
        for (auto c : vec) {
            if (y != c.second) {
                ry = c.second;
                break;
            }
        }
    } else {
        ry = y;
    }

    cout << rx << " " << ry << "\n";

    return 0;
}