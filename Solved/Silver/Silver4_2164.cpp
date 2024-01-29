#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> que;
    int testcase = 0;

    cin >> testcase;

    for (int i = 1; i <= testcase; i++) {
        que.push(i);
        // cout << que.back() << "\n";
    }

    while (que.size() != 1) {
        que.pop();
        que.push(que.front());
        que.pop();
    }

    cout << que.back();
    return 0;
}
