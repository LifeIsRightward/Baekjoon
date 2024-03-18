#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> nodes(100001);
bool visited[100001];
int n = 0;
int k = 0;
int depth[100001];
void resetvisited() {
  for (int i = 0; i < 100001; i++) {
    visited[i] = false;
  }
}

void dfs(int startnode) {
  if (visited[startnode]) {
    return;
  }

  visited[startnode] = true;

  for (auto next : nodes[startnode]) {
    if (!visited[next]) {
      depth[next]++;
      dfs(next);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  resetvisited();

  int p, c;

  cin >> n >> k;
  for (int i = 0; i < n - 1; i++) {
    cin >> p >> c;
    nodes[p].push_back(c);
  }

  dfs(0);

  cout << "k :" << k << "\n";
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    cin >> temp;
    if (k == i) {
      cout << depth[i];
    }
  }
  return 0;
}
