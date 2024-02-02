#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define max_edge 10001
using namespace std;

vector<vector<int>> BFSnodes(max_edge);
vector<vector<int>> DFSnodes(max_edge);
vector<bool> BFSvisited(max_edge, false);
vector<bool> DFSvisited(max_edge, false);
queue<int> BFS_queue;
vector<int> BFSresult;

int N, M, V = 0;
int start = 0;
int fin = 0;

void BFS(int BFSstart);
void DFS(int DFSstart);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> M >> V;

  BFSnodes.resize(M);
  DFSnodes.resize(M);

  for (int i = 1; i <= M; i++) {
    cin >> start >> fin;

    BFSnodes[start].push_back(fin);
    BFSnodes[fin].push_back(start);
    DFSnodes[start].push_back(fin);
    DFSnodes[fin].push_back(start);
  }

  for (int i = 1; i <= N; i++) {
    sort(BFSnodes[i].begin(), BFSnodes[i].end());
    sort(DFSnodes[i].begin(), DFSnodes[i].end());
  }

  DFS(V);
  cout << "\n";
  BFS(V);

  return 0;
}

void DFS(int DFSstart) {
  if (DFSvisited[DFSstart]) {
    return;
  }
  cout << DFSstart << " ";
  DFSvisited[DFSstart] = true;
  for (auto next : DFSnodes[DFSstart]) {
    DFS(next);
  }
}

void BFS(int BFSstart) {
  BFS_queue.push(BFSstart);
  BFSvisited[BFSstart] = true;

  while (!BFS_queue.empty()) {
    int cur = BFS_queue.front();
    cout << cur << " ";
    BFS_queue.pop();

    for (auto next : BFSnodes[cur]) {
      if (!BFSvisited[next]) {
        BFS_queue.push(next);
        BFSvisited[next] = true;
      }
    }
  }
}
