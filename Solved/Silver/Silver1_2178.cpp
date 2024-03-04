#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;
// N은 높이, M은 너비
int N, M = 0;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
queue<pair<int, int>> q;
vector<vector<char>> map(101, vector<char>(101));
vector<vector<bool>> visited(101, vector<bool>(101));
vector<vector<int>> depth(101, vector<int>(101));

void bfs(int startx, int starty) {
  visited[startx][starty] = true;
  q.push(make_pair(startx, starty));
  depth[startx][starty]++;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || nx >= N || ny >= M) {
        continue;
      }

      if (!visited[nx][ny] && map[nx][ny] == '1') {
        visited[nx][ny] = true;
        q.push(make_pair(nx, ny));
        depth[nx][ny] = depth[x][y] + 1;
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char temp = 0;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> temp;
      map[i][j] = temp;
      visited[i][j] = false;
    }
  }

  // 1,1 부터 시작인데 나는 0,0 부터 시작함
  bfs(0, 0);

  cout << depth[N - 1][M - 1];

  return 0;
}
