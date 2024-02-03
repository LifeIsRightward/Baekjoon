#include <cstring> //memset
#include <iostream>

using namespace std;

int n, cnt;             // n : 맵의 크기 n * n , cnt : 구역의 개수
char map[101][101];     // map[x][y] : 탐색을 할 이차원 배열
bool visited[101][101]; // visited[101][101] : 이미 탐색한 좌표 저장 공간

int dx[] = {1, -1, 0, 0}; // 상하좌우 탐색
int dy[] = {0, 0, 1, -1}; // 위, 아래를 한 세트씩 묶어서 4가지의 경우의 수를 보는거임{1,0}, {-1,0}, {0,1}, {0,-1}

void dfs(int nowx, int nowy) {
    if (visited[nowx][nowy]) {
        return; // 현재 좌표를 방문했다면 return
    }

    visited[nowx][nowy] = true; // 좌표 방문 처리

    for (int i = 0; i < 4; i++) // 상하좌우
    {
        int X = dx[i] + nowx;
        int Y = dy[i] + nowy;

        if ((map[nowx][nowy] == map[X][Y]) && !visited[X][Y]) // 다음 탐색하는 좌표가 현재 좌표와 색이 같고 방문하지 않았다면
        {
            dfs(X, Y);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char temp;
    // input
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            map[i][j] = temp;
        }
    }

    // solve
    // 적록색약이 아닌 사람이 보았을 때의 구역 수
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) // 방문하지 않았다면
            {
                dfs(i, j);
                cnt++; // dfs가 끝났다면 한 구역을 다 돈 것이 되기에 구역의 수 1 증가
            }
        }
    }

    cout << cnt << " ";                      // 출력
    cnt = 0;                                 // 구역의 수 초기화
    memset(visited, false, sizeof(visited)); // 방문 배열 초기화

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 'G')
                map[i][j] = 'R'; // 초록색 글자를 빨간색으로 바꿈
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) // 방문하지 않았다면
            {
                dfs(i, j);
                cnt++; // dfs가 끝났다면 한 구역을 다 돈 것이 되기에 구역의 수 1 증가
            }
        }
    }

    cout << cnt; // 출력

    return 0;
}