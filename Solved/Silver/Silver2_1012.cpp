#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int posarr[51][51];
bool visited[51][51];
int cnt = 0;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
void dfs(int nowx, int nowy) {
  if (visited[nowx][nowy]) {
    return;
  }

  visited[nowx][nowy] = true;
  // cout << nowx << " : " << nowy << "\n";
  for (int i = 0; i < 4; i++) {
    int newx = nowx + dx[i];
    int newy = nowy + dy[i];

    if (posarr[newx][newy] == 1 && !visited[newx][newy]) {
      dfs(newx, newy);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  int X = 0;
  int Y = 0;
  int poscnt = 0;
  pair<int, int> pospair;

  cin >> testcase;

  for (int k = 0; k < testcase; k++) {
    cin >> X >> Y >> poscnt;
    cnt = 0;
    // ���� 2���� �迭 �ʱ�ȭ
    for (int i = 0; i < Y; i++) {
      for (int j = 0; j < X; j++) {
        posarr[i][j] = 0;
      }
    }

    // visited bool �迭 �ʱ�ȭ
    for (int i = 0; i < Y; i++) {
      for (int j = 0; j < X; j++) {
        visited[i][j] = false;
      }
    }

    // �Է� �ޱ�
    for (int i = 0; i < poscnt; i++) {
      cin >> pospair.first >> pospair.second;
      posarr[pospair.second][pospair.first] = 1;
    }

    for (int i = 0; i < Y; i++) {
      for (int j = 0; j < X; j++) {
        if (!visited[i][j] && posarr[i][j]) {
          dfs(i, j);
          cnt++;
        }
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}

// ��� �ڵ� - Ȯ�ο�
// for (int i = 0; i < Y; i++) {
//     for (int j = 0; j < X; j++) {
//         cout << posarr[i][j] << " ";
//     }
//     cout << "\n";
// }
