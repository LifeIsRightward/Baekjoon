#include <cstring> //memset
#include <iostream>

using namespace std;

int n, cnt;             // n : ���� ũ�� n * n , cnt : ������ ����
char map[101][101];     // map[x][y] : Ž���� �� ������ �迭
bool visited[101][101]; // visited[101][101] : �̹� Ž���� ��ǥ ���� ����

int dx[] = {1, -1, 0, 0}; // �����¿� Ž��
int dy[] = {0, 0, 1, -1}; // ��, �Ʒ��� �� ��Ʈ�� ��� 4������ ����� ���� ���°���{1,0}, {-1,0}, {0,1}, {0,-1}

void dfs(int nowx, int nowy) {
    if (visited[nowx][nowy]) {
        return; // ���� ��ǥ�� �湮�ߴٸ� return
    }

    visited[nowx][nowy] = true; // ��ǥ �湮 ó��

    for (int i = 0; i < 4; i++) // �����¿�
    {
        int X = dx[i] + nowx;
        int Y = dy[i] + nowy;

        if ((map[nowx][nowy] == map[X][Y]) && !visited[X][Y]) // ���� Ž���ϴ� ��ǥ�� ���� ��ǥ�� ���� ���� �湮���� �ʾҴٸ�
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
    // ���ϻ����� �ƴ� ����� ������ ���� ���� ��
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) // �湮���� �ʾҴٸ�
            {
                dfs(i, j);
                cnt++; // dfs�� �����ٸ� �� ������ �� �� ���� �Ǳ⿡ ������ �� 1 ����
            }
        }
    }

    cout << cnt << " ";                      // ���
    cnt = 0;                                 // ������ �� �ʱ�ȭ
    memset(visited, false, sizeof(visited)); // �湮 �迭 �ʱ�ȭ

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 'G')
                map[i][j] = 'R'; // �ʷϻ� ���ڸ� ���������� �ٲ�
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) // �湮���� �ʾҴٸ�
            {
                dfs(i, j);
                cnt++; // dfs�� �����ٸ� �� ������ �� �� ���� �Ǳ⿡ ������ �� 1 ����
            }
        }
    }

    cout << cnt; // ���

    return 0;
}