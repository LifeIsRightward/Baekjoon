#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, cnt = 0;
    string tempstr;
    set<string> M1;
    vector<string> ans;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> tempstr;
        M1.insert(tempstr);
    }

    for (int j = 0; j < M; j++) {
        cin >> tempstr;
        if (M1.find(tempstr) != M1.end()) {
            cnt++;
            ans.push_back(tempstr);
        }
    }

    sort(ans.begin(), ans.end());

    cout << cnt << "\n";
    for (auto a : ans) {
        cout << a << "\n";
    }
    return 0;
}
