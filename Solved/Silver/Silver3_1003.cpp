#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase = 0;
    int temp = 0;
    vector<pair<int, int>> vec(41);

    vec[0].first = 1;
    vec[0].second = 0;
    vec[1].first = 0;
    vec[1].second = 1;

    for (int i = 2; i <= 40; i++) {
        vec[i].first = vec[i - 2].first + vec[i - 1].first;
        vec[i].second = vec[i - 2].second + vec[i - 1].second;
    }

    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        cin >> temp;
        cout << vec[temp].first << " " << vec[temp].second << "\n";
    }
    return 0;
}
