#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 높이
int h = 0;
// 너비
int w = 0;

char map[101][101];
bool visited[101][101];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int cnt = 0;

void dfs(int x, int y) {
  visited[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || ny < 0 || nx >= h || ny >= w) {
      continue;
    }
    if (!visited[nx][ny] && map[nx][ny] == '#') {
      dfs(nx, ny);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char tempch;
  int testcase = 0;
  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cnt = 0;
    cin >> h >> w;
    for (int j = 0; j < h; j++) {
      for (int q = 0; q < w; q++) {
        cin >> tempch;
        map[j][q] = tempch;
        visited[j][q] = false;
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (!visited[i][j] && map[i][j] == '#') {
          dfs(i, j);
          cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}
