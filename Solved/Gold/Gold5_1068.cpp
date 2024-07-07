#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, k, leaf = 0;
int root;
vector<int> tree[51];

int dfs(int node) {

    // dfs�� �������� ��尡 ������ �����, �� ������ �� �ʿ���� �ű⼭ �ߴ��ϸ� �ȴ�.
    // ������ ������ ���ؿ� �ڽ��� ���°���, ���ǹ��ϱ� �����̴�.
    if (node == k) {
        return -1;
    }

    // ���� dfs�� �������� node�� size�� ���°���, �ڽ��� �ִ°��� ������ ���� �����̴�.
    // ���� dfs�� �������� node�� size�� ���ٸ�. ��, 0 �̶�� �ڽ��� ���ٴ� ���̰�
    // �׷� ���� dfs�� ������ node�� leaf����� ���� �ȴ�.
    // leaf++ ���ְ� �ش� ȸ�� dfs�� �����ϸ� �ȴ�.
    if (!tree[node].size()) {
        leaf++;
        return 0;
    }

    // dfs�� ������ ����� size(�ڽ� ����)��ŭ ���ư��鼭
    // dfs�� �����鼭 k�� ����Ʈ���� ������ ������ ������ ���� �����ϱ�
    // ��ü �������� k�� ������ ��, ���� ������ �Ǵ��� �ƴϴ��Ŀ� ���� �ٲ�
    // ���� ������� k �Ʒ��δ� �ϴ� dfs�� �������� �ʱ� ������
    // ���� ������� �༮ �̸鼭(tmp == -1) && �ؿ� �� �༮�� �־ size()�� 1�ΰ���
    // ������ ����� �ƴϱ� ������ size()�� 1�ΰ���
    // �׷� k�༮�� ���� ����, ���� ������尡 �Ǳ� ������ leaf++ ���ذ���
    for (int i = 0; i < tree[node].size(); i++) {
        int tmp = dfs(tree[node][i]);

        if (tmp == -1 && tree[node].size() == 1) {
            leaf++;
        }
    }
    return 0;
}

int main() {
    // ����� ���� �Է� �ޱ�
    cin >> n;

    // ��� �Է� �ޱ�
    for (int i = 0; i < n; i++) {
        int nodeParents;
        cin >> nodeParents;

        if (nodeParents == -1) {
            root = i;
        } else {
            // i �� nodeindex�� ��.(��� nodeindex�� �ְ� ���� �� ���������� ���� ������°� ����)
            // nodeParents ����� �ڽ��� i��° �ε����� �ڽ����� �߰���.
            tree[nodeParents].push_back(i);
        }
    }

    // ���� ���� �� ��� �Է� �ޱ�
    cin >> k;

    dfs(root);
    cout << leaf;

    return 0;
}
