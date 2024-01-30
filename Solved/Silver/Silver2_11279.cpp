#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>> pq;
    int temp = 0;
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp == 0) {
            if (pq.empty()) {
                cout << "0"
                     << "\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(temp);
        }
    }
    return 0;
}
