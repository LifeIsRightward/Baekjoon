#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define max_node 1000001
using namespace std;

vector<vector<int>> nodes(max_node);
vector<int> visited(max_node, 0);
vector<int> result(max_node, 0);
queue<int> bfs_queue;
void bfs(int start);
int cnt = 1;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int M = 0;
  int R = 0;
  int start, end = 0;

  cin >> N >> M >> R;

  for (int i = 1; i <= M; i++) {
    cin >> start >> end;
    nodes[start].push_back(end);
    nodes[end].push_back(start);
  }

  for (int i = 1; i <= N; i++) {
    sort(nodes[i].begin(), nodes[i].end());
  }

  bfs(R);

  for (int i = 1; i <= N; i++) {
    cout << visited[i] << "\n";
  }
  return 0;
}

void bfs(int start) {
  bfs_queue.push(start);
  visited[start] = cnt;

  while (!bfs_queue.empty()) {
    int cur = bfs_queue.front();
    bfs_queue.pop();

    for (auto next : nodes[cur]) {
      if (!visited[next]) {
        bfs_queue.push(next);
        visited[next] = ++cnt;
      }
    }
  }
}
