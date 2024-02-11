#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int map[1002][1002];
int visited[1002][1002];

int targetx, targety = 0;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int starty, int startx) {
  queue<pair<int, int>> q;
  q.push({starty, startx});

  visited[starty][startx] = 1;

  while (!q.empty()) {
    int fronty = q.front().first;
    int frontx = q.front().second;

    q.pop();

    for (int i = 0; i < 4; i++) {
      int newy = fronty + dy[i];
      int newx = frontx + dx[i];

      // 새로 만들어진 좌표를 아직 방문하지 않았고, 그 좌표의 값이 0이 아니라면.
      if (visited[newy][newx] == 0 && map[newy][newx] != 0) {
        // 새로 만들어진 좌표 방문에 -> 기존 방문 값 + 1(거리)
        visited[newy][newx] = visited[fronty][frontx] + 1;
        // 계속 BFS를 돌리기 위해, 새로 만들어진 값을 큐에 push
        q.push({newy, newx});
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int y = 0;
  int x = 0;
  int temp = 0;

  cin >> y >> x;

  // 원본map에 입력받아서 초기화 시킴
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cin >> temp;
      if (temp == 2) {
        targety = i;
        targetx = j;
      }
      map[i][j] = temp;
      // 동시에 visited int 배열을 0으로 초기화
      visited[i][j] = 0;
    }
  }

  bfs(targety, targetx);

  // cout << "===================="
  //      << "\n";
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (map[i][j] == 0) {
        cout << 0 << " ";
      } else {
        cout << visited[i][j] - 1 << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}

// 출력 확인용
// cout << "================================"
//        << "\n";
//   for (int i = 0; i < y; i++) {
//     for (int j = 0; j < x; j++) {
//       cout << map[i][j] << " ";
//     }
//     cout << "\n";
//   }
