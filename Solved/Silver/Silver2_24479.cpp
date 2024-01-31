#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define Max_node 100001
using namespace std;

vector<vector<int>> node(Max_node);
vector<int> visited(Max_node, 0);
int cnt = 0;
void dfs(int curnode);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0; // 노드의 수(정점의 수)
    int M = 0; // 간선의 수(에지의 수)
    int R = 0; // 시작 정점(노드)번호
    int start = 0;
    int end = 0;
    cin >> N >> M >> R;

    // 간선의 수 만큼 입력을 받아야함. 노드의 수 만큼이 아니라.
    for (int i = 0; i < M; i++) {
        cin >> start >> end;
        node[start].push_back(end);
        node[end].push_back(start);
    }

    for (int q = 1; q <= N; q++) {
        sort(node[q].begin(), node[q].end());
    }

    dfs(R);

    for (int i = 1; i <= N; i++) {
        cout << visited[i] << "\n";
    }

    return 0;
}

void dfs(int curnode) {
    if (visited[curnode]) {
        return;
    }
    cnt++;
    visited[curnode] = cnt;
    for (auto next : node[curnode]) {
        dfs(next);
    }
}
