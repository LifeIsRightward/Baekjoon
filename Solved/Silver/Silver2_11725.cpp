#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> nodes(100001);
vector<bool> visited(100001, false);
vector<int> parents(100001);

void dfs(int node) {
  visited[node] = true;
  int curnode = node;

  for (auto next : nodes[curnode]) {
    if (!visited[next]) {
      parents[next] = curnode;
      dfs(next);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int nodecnt = 0;
  int start = 0;
  int end = 0;

  cin >> nodecnt;
  for (int i = 0; i < nodecnt - 1; i++) {
    cin >> start >> end;
    nodes[start].push_back(end);
    nodes[end].push_back(start);
  }

  for (int i = 1; i <= nodecnt; i++) {
    sort(nodes[i].begin(), nodes[i].end());
  }

  dfs(1);

  for (int i = 2; i <= nodecnt; i++) {
    cout << parents[i] << "\n";
  }
  return 0;
}
