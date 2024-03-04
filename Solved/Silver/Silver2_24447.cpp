#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define max_node 1000001
using namespace std;

int nodes = 0;
int edges = 0;
int startnode = 0;
vector<vector<long long>> nodevec(max_node);
vector<bool> visited(max_node, false);
long long order[max_node];
vector<long long> depth(max_node);
queue<long long> q;
long long sum = 0;

void bfs(int startN) {
    visited[startN] = true;
    q.push(startN);
    depth[startN] = 0;
    int list = 1;
    while (!q.empty()) {
        int cur = q.front();
        order[list] = cur;
        list++;
        q.pop();

        for (auto next : nodevec[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
                depth[next] = depth[cur] + 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> nodes >> edges >> startnode;

    pair<int, int> tempnode;

    for (int i = 1; i <= edges; i++) {
        cin >> tempnode.first >> tempnode.second;
        nodevec[tempnode.first].push_back(tempnode.second);
        nodevec[tempnode.second].push_back(tempnode.first);
    }

    for (int i = 1; i <= nodes; i++) {
        sort(nodevec[i].begin(), nodevec[i].end());
    }

    bfs(startnode);

    cout << "\n";
    for (int i = 1; i <= nodes; i++) {
        if (visited[i]) {
            sum += depth[i] * order[i];
            // cout << depth[i] << " " << order[i] << "\n";
            // cout << order[i] << "\n";
        } else {
            sum += -1 * order[i];
            // cout << order[i] << "\n";
        }
    }

    cout << sum;
    return 0;
}
