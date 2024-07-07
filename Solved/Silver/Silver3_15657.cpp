#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define MAX 9

using namespace std;

int n, m;
// 답 배열
int arr[MAX] = {
    0,
};

// 내가 입력받은 숫자들의 배열
int num[MAX] = {
    0,
};

// dfs를 쓰기위한 방문 체크 배열
bool visited[MAX] = {
    0,
};

void dfs(int cnt, int index) {
    // dfs의 인자가 곧 지금까지 나온 숫자의 갯수일테이다.
    // 최대 m개인 ㅇㅇ

    // 다 찾으면 그 즉시 출력(하나의 경우의수가 충족되었을 경우이다. cnt는, 지금
    // 몇째 자리수를 보고 있느냐. m은 내가 뽑아야할 자리수)
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        // 이후애 리턴 되어서, 함수가 종료되면, 바로 뒤로 돌아가 또 for문에서 탐색을
        // 하겠지
        return;
    }

    for (int i = index; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = num[i];
            visited[i] = false;
            dfs(cnt + 1, i);
            // 원복을 시켜놓는 과정(dfs가 끝난 이후 빠져나온다음에 실행되는 아래 구문)
            // visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // 수열은 사전순으로 증가하는 순서로 출력해야하기 때문에, 애시당초에
    // 오름차순으로 정렬을 해둠으로써, 따로 나중에 정렬하지 않아도 됨을 보장한다.
    sort(num, num + n);

    dfs(0, 0);
}