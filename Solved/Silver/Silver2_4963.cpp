#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt = 0;
int w = 0;
int h = 0;
// �밢�����ε� �� �� �ִٰ� ��
int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
vector<vector<int>> map(51, vector<int>(51));
vector<vector<bool>> visited(51, vector<bool>(51));

void dfs(int x, int y) {
  visited[x][y] = true;

  for (int i = 0; i < 8; i++) {
    int newx = x + dx[i];
    int newy = y + dy[i];

    if (newx < 0 || newy < 0 || newx >= h || newy >= w) {
      continue;
    }

    if (!visited[newx][newy] && map[newx][newy]) {
      dfs(newx, newy);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true) {
    cin >> w >> h;
    cnt = 0;
    if (w == 0 && h == 0) {
      break;
    }

    // map.resize(h, vector<int>(w));
    // visited.resize(h, vector<bool>(w));
    int temp;

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> temp;
        map[i][j] = temp;
        visited[i][j] = false;
      }
    }

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (!visited[i][j] && map[i][j] == 1) {
          cnt++;
          dfs(i, j);
        }
      }
    }

    cout << cnt << "\n";
  }
  return 0;
}
