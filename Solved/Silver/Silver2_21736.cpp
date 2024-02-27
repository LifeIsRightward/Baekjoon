#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

vector<vector<char>> map(601, vector<char>(601));
vector<vector<bool>> visited(601, vector<bool>(601));
int meetFriends = 0;

// n 은 세로, m은 가로이다.
int n, m = 0;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(pair<int, int> start) {
  queue<pair<int, int>> q;
  q.push(start);
  visited[start.first][start.second] = true;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (map[x][y] == 'P') {
      meetFriends++;
    }

    for (int i = 0; i < 4; i++) {
      int newx = x + dx[i];
      int newy = y + dy[i];

      // 조건 탐색
      if (newx < 0 || newx >= n || newy < 0 || newy >= m) {
        continue;
      }
      if (map[newx][newy] != 'X' && !visited[newx][newy]) {
        q.push(make_pair(newx, newy));
        visited[newx][newy] = true;
      }
    }
  }
};
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  map.resize(n, vector<char>(m));
  visited.resize(n, vector<bool>(m));

  pair<int, int> startpoint;
  char temp;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> temp;
      if (temp == 'I') {
        startpoint.first = i;
        startpoint.second = j;
      }
      if (temp == 'X') {
        visited[i][j] = true;
      }
      map[i][j] = temp;
      visited[i][j] = false;
    }
  }

  bfs(startpoint);

  if (meetFriends > 0) {
    cout << meetFriends;
  } else {
    cout << "TT";
  }
  return 0;
}