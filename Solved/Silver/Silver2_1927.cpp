#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) { // 절댓값이 같은 경우
            return a > b;
            // 오름차순 a > b -> 오름차순
            // 내림차순 a < b -> 내림차순
        } else {
            return abs(a) > abs(b); // 절댓값 크기 오름차순
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, compare> pq;
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
