#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

queue<pair<long long, long long>> q;
bool visited[200001];
int N, K;

void bfs() {
    q.push({N, 0}); // 최초 탐색 시작점, time = 0
    visited[N] = 0;

    while (!q.empty()) {
        long long pos = q.front().first;
        long long time = q.front().second;

        q.pop();
        if (pos < 0 || pos > 100000) {
            continue;
        }

        if (pos == K) {
            cout << time; // 동생을 찾았으면 time 출력
            break;
        }

        if (visited[pos * 2] == false) {
            visited[pos * 2] = true;
            q.push({pos * 2, time + 1}); // 시간을 1씩 늘리면서 탐색
        }

        if (visited[pos + 1] == false) {
            visited[pos + 1] = true;
            q.push({pos + 1, time + 1});
        }

        if (visited[pos - 1] == false) {
            visited[pos - 1] = true;
            q.push({pos - 1, time + 1});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;
    bfs();

    return 0;
}
