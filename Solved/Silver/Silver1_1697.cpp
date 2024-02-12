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
    q.push({N, 0}); // ���� Ž�� ������, time = 0
    visited[N] = 0;

    while (!q.empty()) {
        long long pos = q.front().first;
        long long time = q.front().second;

        q.pop();
        if (pos < 0 || pos > 100000) {
            continue;
        }

        if (pos == K) {
            cout << time; // ������ ã������ time ���
            break;
        }

        if (visited[pos * 2] == false) {
            visited[pos * 2] = true;
            q.push({pos * 2, time + 1}); // �ð��� 1�� �ø��鼭 Ž��
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
