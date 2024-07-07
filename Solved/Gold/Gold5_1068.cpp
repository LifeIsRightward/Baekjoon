#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, k, leaf = 0;
int root;
vector<int> tree[51];

int dfs(int node) {

    // dfs를 돌리려는 노드가 삭제할 노드라면, 더 밑으로 들어갈 필요없이 거기서 중단하면 된다.
    // 어차피 삭제할 노드밑에 자식을 보는것은, 무의미하기 때문이다.
    if (node == k) {
        return -1;
    }

    // 내가 dfs를 돌리려는 node의 size를 보는것은, 자식이 있는가의 유무를 보기 위함이다.
    // 내가 dfs를 돌리려는 node의 size가 없다면. 즉, 0 이라면 자식이 없다는 뜻이고
    // 그럼 지금 dfs를 돌리는 node는 leaf노드라는 뜻이 된다.
    // leaf++ 해주고 해당 회차 dfs를 종료하면 된다.
    if (!tree[node].size()) {
        leaf++;
        return 0;
    }

    // dfs를 보려는 노드의 size(자식 갯수)만큼 돌아가면서
    // dfs를 돌리면서 k의 서브트리의 리프를 제외한 리프의 수를 셋으니까
    // 전체 리프수는 k를 지웠을 때, 내가 리프가 되느냐 아니느냐에 따라 바뀜
    // 내가 지우려는 k 아래로는 일단 dfs를 진행하지 않기 때문에
    // 내가 지우려는 녀석 이면서(tmp == -1) && 밑에 그 녀석이 있어서 size()가 1인거임
    // 실제로 지운게 아니기 때문에 size()가 1인거임
    // 그럼 k녀석을 지운 순간, 내가 리프노드가 되기 때문에 leaf++ 해준거임
    for (int i = 0; i < tree[node].size(); i++) {
        int tmp = dfs(tree[node][i]);

        if (tmp == -1 && tree[node].size() == 1) {
            leaf++;
        }
    }
    return 0;
}

int main() {
    // 노드의 갯수 입력 받기
    cin >> n;

    // 노드 입력 받기
    for (int i = 0; i < n; i++) {
        int nodeParents;
        cin >> nodeParents;

        if (nodeParents == -1) {
            root = i;
        } else {
            // i 는 nodeindex가 됨.(사실 nodeindex가 있건 없건 이 문제에서는 딱히 상관없는거 같음)
            // nodeParents 노드의 자식인 i번째 인덱스가 자식으로 추가됨.
            tree[nodeParents].push_back(i);
        }
    }

    // 내가 삭제 할 노드 입력 받기
    cin >> k;

    dfs(root);
    cout << leaf;

    return 0;
}
