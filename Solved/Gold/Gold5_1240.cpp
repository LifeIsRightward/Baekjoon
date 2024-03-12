#include <iostream>
#include <vector>
using namespace std;
int N, M;

vector<vector<pair<int, int>>> edge;
bool visited[1001];

int dfs(int from, int to, int distance) {
    if (from == to) {
        return distance;
    }
    for (auto next : edge[from]) {
        int next_node = next.first;
        int next_dist = next.second;
        if (!visited[next_node]) {
            visited[next_node] = true;

            int fnd = dfs(next_node, to, next_dist + distance);
            if (fnd != -1) {
                return fnd;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    edge.resize(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }

    for (int i = 0; i < M; i++) {
        for (int i = 1; i <= N; i++) {
            visited[i] = false;
        }
        int from, to;
        cin >> from >> to;
        visited[from] = true;
        int answer = dfs(from, to, 0);
        cout << answer << "\n";
    }

    return 0;
}