#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

queue<pair<int, int>> q;
int map[1001][1001];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
vector<pair<int, int>> pvec;
int day = 0;
int M, N;

void bfs() {
  for (auto a : pvec) {
    q.push(a);
  }  // 1인곳을 전부 push ㅇㅇ

  while (!q.empty()) {
    int fronty = q.front().first;
    int frontx = q.front().second;

    q.pop();

    for (int i = 0; i < 4; i++) {
      int newy = fronty + dy[i];
      int newx = frontx + dx[i];

      if (newy < 0 || newy >= N || newx < 0 || newx >= M) {
        continue;
        // 범위 안에 있는지 조건 확인
      }
      if (map[newy][newx] == -1) {
        continue;  // -1은 갈 수 없는 곳이기때문에 건너뜀
      }
      if (map[newy][newx] == 0) {
        map[newy][newx] = map[fronty][frontx] + 1;
        q.push({newy, newx});
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp = 0;

  cin >> M >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> temp;
      map[i][j] = temp;
      if (temp == 1) {
        pvec.push_back({i, j});
      }
    }
  }
  bfs();

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      day = max(day, map[i][j] - 1);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (map[i][j] == 0) {
        day = -1;
      }
    }
  }

  cout << day;
  return 0;
}
