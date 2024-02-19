#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int nodes, a, b;
vector<int> connect[51];
vector<pair<int, int>> ans; // 친구의 수, 번호

// 결국 bfs를 각각의 노드들에 대해 돌린셈임
void bfs() {
    for (int i = 1; i <= nodes; i++) {
        if (connect[i].size() == 0) {
            continue;
            // connect[i] 번째의 size 가 0 이면, 이후의 코드를 실행하지 않고
            //  다음 반복으로 실행. 그게, continue 임
        }

        queue<pair<int, int>> q;
        int visited[51] = {
            0,
        };
        int totalLevel = 0;
        // i 는 노드 번호임
        q.push(make_pair(i, 0));

        // 하나의 노드에서 시작하는 bfs 돌린거임
        while (!q.empty()) {
            int friends = q.front().first;
            int level = q.front().second;
            // friends는 노드 번호가 됨(사람 번호)
            visited[friends] = true;
            q.pop();

            // 현재 노드의 레벨과, 전체의 레벨을 비교함
            totalLevel = max(totalLevel, level);

            // bfs에서 인접 노드 추가하는 구문
            for (auto next : connect[friends]) {
                if (visited[next] != 0) {
                    continue;
                }
                visited[next] = 1;
                q.push(make_pair(next, level + 1));
            }
        }
        // 다 돌리고 나서, totalLevel과, i번째 노드를 ans 벡터에 pushback
        // i 번째 노드의 깊이를 넣어줌 -> 더 적을수록 회장이 됨
        ans.push_back(make_pair(totalLevel, i));
    }
}

int main() {
    cin >> nodes;
    while (1) {
        cin >> a >> b;
        if (a == -1 && b == -1) {
            break;
        }
        connect[a].push_back(b);
        connect[b].push_back(a);
    }

    bfs();
    sort(ans.begin(), ans.end());

    int ansCnt = 0;
    int ansFriends = ans[0].first;
    // sort를 시키면 0번째에는 가장 적은 깊이가 들어가있겠지(first에)
    vector<int> Ans;
    // 깊이에 상응하는 노드를 저장하기위한 벡터
    for (int i = 0; i < ans.size(); i++) {
        if (ans[0].first == ans[i].first) {
            ansCnt++;
            // 회장 후보가 몇 명인가 count
            Ans.push_back(ans[i].second);
            // 그 노드의 번호는 무엇인가
        }
    }

    cout << ansFriends << " " << ansCnt << "\n";
    for (int i = 0; i < Ans.size(); i++) {
        cout << Ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
