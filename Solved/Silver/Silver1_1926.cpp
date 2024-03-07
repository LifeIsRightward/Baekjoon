#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> map(501, vector<int>(501));
vector<vector<bool>> visited(501, vector<bool>(501));
vector<int> widthvec;
int widht = 0;
int n = 0;
int m = 0;
int cnt = 0;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
  visited[x][y] = true;
  widht++;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
      continue;
    }

    if (!visited[nx][ny] && map[nx][ny]) {
      dfs(nx, ny);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp = 0;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> temp;
      map[i][j] = temp;
      visited[i][j] = false;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!visited[i][j] && map[i][j]) {
        dfs(i, j);
        widthvec.push_back(widht);
        widht = 0;
        cnt++;
      }
    }
  }

  cout << cnt << "\n";
  int max = 0;
  for (auto a : widthvec) {
    if (a > max) {
      max = a;
    }
  }
  cout << max;
  return 0;
}
