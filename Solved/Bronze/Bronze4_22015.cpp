#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> vec;

    int a, b, c = 0;
    int total = 0;
    int max = 0;
    cin >> a >> b >> c;

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    max = *max_element(vec.begin(), vec.end());
    for (auto a : vec) {
        total += (max - a);
    }

    cout << total << "\n";
    return 0;
}