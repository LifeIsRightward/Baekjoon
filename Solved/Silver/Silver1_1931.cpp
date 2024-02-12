#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// �׸��� �˰���
// �� ������ ������ �ð����� ���� ����� ���۽ð��� ���°Ŵ�.

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    // first�� �𸣰ڰ�, second�� ������������ ����
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> vec;
    pair<int, int> temp;
    int N = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp.first >> temp.second;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), cmp);

    // for (auto a : vec) {
    //     cout << a.first << " : " << a.second << "\n";
    // }

    int itemp = 0;
    int cnt = 1;
    itemp = vec[0].second;

    for (int i = 1; i < N; i++) {
        if (itemp <= vec[i].first) {
            itemp = vec[i].second;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
