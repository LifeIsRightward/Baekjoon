#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;
    int tmp = 0;
    vector<int> vec;

    int total = 0;
    int plus = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.push_back(tmp);
    }

    for (auto a : vec) {
        if (a == 0) {
            plus = 0;
        } else {
            total += a;
            total += plus;
            plus++;
        }
    }

    cout << total << "\n";
    return 0;
}