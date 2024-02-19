#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int nodes, a, b;
vector<int> connect[51];
vector<pair<int, int>> ans; // ģ���� ��, ��ȣ

// �ᱹ bfs�� ������ ���鿡 ���� ��������
void bfs() {
    for (int i = 1; i <= nodes; i++) {
        if (connect[i].size() == 0) {
            continue;
            // connect[i] ��°�� size �� 0 �̸�, ������ �ڵ带 �������� �ʰ�
            //  ���� �ݺ����� ����. �װ�, continue ��
        }

        queue<pair<int, int>> q;
        int visited[51] = {
            0,
        };
        int totalLevel = 0;
        // i �� ��� ��ȣ��
        q.push(make_pair(i, 0));

        // �ϳ��� ��忡�� �����ϴ� bfs ��������
        while (!q.empty()) {
            int friends = q.front().first;
            int level = q.front().second;
            // friends�� ��� ��ȣ�� ��(��� ��ȣ)
            visited[friends] = true;
            q.pop();

            // ���� ����� ������, ��ü�� ������ ����
            totalLevel = max(totalLevel, level);

            // bfs���� ���� ��� �߰��ϴ� ����
            for (auto next : connect[friends]) {
                if (visited[next] != 0) {
                    continue;
                }
                visited[next] = 1;
                q.push(make_pair(next, level + 1));
            }
        }
        // �� ������ ����, totalLevel��, i��° ��带 ans ���Ϳ� pushback
        // i ��° ����� ���̸� �־��� -> �� �������� ȸ���� ��
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
    // sort�� ��Ű�� 0��°���� ���� ���� ���̰� ���ְ���(first��)
    vector<int> Ans;
    // ���̿� �����ϴ� ��带 �����ϱ����� ����
    for (int i = 0; i < ans.size(); i++) {
        if (ans[0].first == ans[i].first) {
            ansCnt++;
            // ȸ�� �ĺ��� �� ���ΰ� count
            Ans.push_back(ans[i].second);
            // �� ����� ��ȣ�� �����ΰ�
        }
    }

    cout << ansFriends << " " << ansCnt << "\n";
    for (int i = 0; i < Ans.size(); i++) {
        cout << Ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
