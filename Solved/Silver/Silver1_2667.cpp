#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// int 배열로 하니까 저 입력을 한 입력으로 모두 받아버렸다.
// char 자체가 1바이트니까 한 문자만을 받음. 그래서 분리되어서 받게끔 해주었다.
vector<vector<char>> map(26, vector<char>(26));
vector<vector<bool>> visited(26, vector<bool>(26));

// 정사각형임
int n = 0;

vector<int> result(100, 0);
int tempcnt;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
  visited[x][y] = true;
  tempcnt++;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    // 탐색 범위 조건(Out of Bounds의 문제 방지)
    if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
      continue;
    }

    if (!visited[nx][ny]) {
      dfs(nx, ny);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 연결요소 갯수
  int cnt = 0;

  cin >> n;
  // n by n으로 다시 resizing
  map.resize(n, vector<char>(n));
  visited.resize(n, vector<bool>(n));

  char temp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> temp;
      map[i][j] = temp;

      if (map[i][j] == '1') {
        visited[i][j] = false;
      } else {
        // 갈 수 없는곳은 사전에(초기화때) 미리 true로 만들어두어서
        // 애초에 방문하지 않도록 만듦(시간 단축)
        visited[i][j] = true;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!visited[i][j]) {
        dfs(i, j);
        cnt++;
        result.push_back(tempcnt);
        tempcnt = 0;
      }
    }
  }

  sort(result.begin(), result.end());
  result.erase(remove(result.begin(), result.end(), 0), result.end());
  cout << cnt;
  cout << "\n";

  for (auto a : result) {
    cout << a << "\n";
  }

  return 0;
}
