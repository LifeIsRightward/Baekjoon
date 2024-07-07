#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define MAX 9

using namespace std;

int n, m;
// �� �迭
int arr[MAX] = {
    0,
};

// ���� �Է¹��� ���ڵ��� �迭
int num[MAX] = {
    0,
};

// dfs�� �������� �湮 üũ �迭
bool visited[MAX] = {
    0,
};

void dfs(int cnt, int index) {
    // dfs�� ���ڰ� �� ���ݱ��� ���� ������ ���������̴�.
    // �ִ� m���� ����

    // �� ã���� �� ��� ���(�ϳ��� ����Ǽ��� �����Ǿ��� ����̴�. cnt��, ����
    // ��° �ڸ����� ���� �ִ���. m�� ���� �̾ƾ��� �ڸ���)
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        // ���ľ� ���� �Ǿ, �Լ��� ����Ǹ�, �ٷ� �ڷ� ���ư� �� for������ Ž����
        // �ϰ���
        return;
    }

    for (int i = index; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = num[i];
            visited[i] = false;
            dfs(cnt + 1, i);
            // ������ ���ѳ��� ����(dfs�� ���� ���� �������´����� ����Ǵ� �Ʒ� ����)
            // visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // ������ ���������� �����ϴ� ������ ����ؾ��ϱ� ������, �ֽô��ʿ�
    // ������������ ������ �ص����ν�, ���� ���߿� �������� �ʾƵ� ���� �����Ѵ�.
    sort(num, num + n);

    dfs(0, 0);
}