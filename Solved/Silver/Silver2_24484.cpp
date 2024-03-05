#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define max_node 1000001
using namespace std;

int node = 0;
int edges = 0;
int startnode = 0;
long long sum = 0;

vector<vector<long long>> nodevec(max_node);
vector<bool> visited(max_node, false);
vector<long long> depth(max_node, 0);
int order[max_node];
int list = 1;

void dfs(int curnode) {
  visited[curnode] = true;
  order[curnode] = list++;
  for (auto next : nodevec[curnode]) {
    if (!visited[next]) {
      depth[next] = depth[curnode] + 1;

      dfs(next);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> node >> edges >> startnode;

  int start, end = 0;

  for (int i = 1; i <= edges; i++) {
    cin >> start >> end;
    nodevec[start].push_back(end);
    nodevec[end].push_back(start);
  }

  for (int i = 1; i <= node; i++) {
    sort(nodevec[i].rbegin(), nodevec[i].rend());
  }

  depth[startnode] = 0;
  dfs(startnode);

  for (int i = 1; i <= node; i++) {
    if (visited[i]) {
      sum += depth[i] * order[i];
      //   cout << order[i] << " order : depth " << depth[i] << "\n";
    } else {
      sum += order[i] * -1;
      //   cout << order[i] << " order : depth "
      //    << "-1"
      //    << "\n";
    }
  }

  cout << sum;
  return 0;
}
