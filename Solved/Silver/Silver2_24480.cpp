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

  int N = 0;  // ����� ��(������ ��)
  int M = 0;  // ������ ��(������ ��)
  int R = 0;  // ���� ����(���)��ȣ
  int start = 0;
  int end = 0;
  cin >> N >> M >> R;

  // ������ �� ��ŭ �Է��� �޾ƾ���. �����
  // �� ��ŭ�� �ƴ϶�.
  for (int i = 0; i < M; i++) {
    cin >> start >> end;
    node[start].push_back(end);
    node[end].push_back(start);
  }

  for (int q = 1; q <= N; q++) {
    sort(node[q].rbegin(), node[q].rend());
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
