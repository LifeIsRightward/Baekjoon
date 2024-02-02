#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 연결요소는 DFS든 BFS든 걍 돌려서 끊어지면 끝나니까
// 끝난 시점에서 cnt++과 함께 다시 BFS나 DFS를 돌려주면 됨
// BFS와 DFS를 다시실행한 수 만큼 연결요소는 측정된다.
vector<vector<int>> nodes(1001);
vector<bool> visited(1001, false);
int N, Edge = 0;
int start, fin = 0;
int cnt = 0;

void DFS(int DFSstart);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> Edge;

  for (int i = 1; i <= Edge; i++) {
    cin >> start >> fin;
    nodes[start].push_back(fin);
    nodes[fin].push_back(start);
  }

  for (int i = 1; i <= N; i++) {
    sort(nodes[i].begin(), nodes[i].end());
  }

  for (int i = 1; i <= N; i++) {
    if (!visited[i]) {
      DFS(i);
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}

void DFS(int DFSstart) {
  if (visited[DFSstart]) {
    return;
  }

  visited[DFSstart] = true;
  for (auto next : nodes[DFSstart]) {
    DFS(next);
  }
}
