#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long a, b, c = 0;

    vector<unsigned long long> vec;

    cin >> a >> b >> c;

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    unsigned long long maxe = *max_element(vec.begin(), vec.end());
    unsigned long long mine = *min_element(vec.begin(), vec.end());

    for (auto a : vec) {
        if (a != maxe && a != mine) {
            cout << a << "\n";
            break;
        }
    }

    return 0;
}