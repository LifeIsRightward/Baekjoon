#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define max_node 101
using namespace std;

vector<vector<int>> nodes(max_node);
vector<bool> visited(max_node, false);

void dfs(int curnode);
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int E = 0;
  int start, end = 0;
  int cnt = 0;

  cin >> N;
  cin >> E;

  for (int i = 1; i <= E; i++) {
    cin >> start >> end;
    nodes[start].push_back(end);
    nodes[end].push_back(start);
  }

  for (int i = 1; i <= N; i++) {
    sort(nodes[i].begin(), nodes[i].end());
  }

  dfs(1);

  for (auto a : visited) {
    if (a) {
      // cout << a << "\n";
      cnt++;
    }
  }

  cout << cnt - 1;
  return 0;
}

void dfs(int curnode) {
  if (visited[curnode]) {
    return;
  }

  visited[curnode] = true;
  for (auto next : nodes[curnode]) {
    dfs(next);
  }
}
