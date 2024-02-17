#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, W; // H ����, W ����
    cin >> H >> W;

    int arr[W]; // W ������ �迭 ����

    // arr �ʱ�ȭ
    for (int i = 0; i < W; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    // left, right

    int pointer = 0;

    // �� ��(start) �� �� ��(end)�� �� �ʿ䰡 ����
    // �׷��� for�� ������ 1 ~ W-1��
    for (int i = 1; i < W - 1; i++) {
        int left = 0, right = 0;
        pointer = i;

        for (int j = 0; j < pointer; j++) {
            left = max(left, arr[j]);
        }

        for (int j = W - 1; j > pointer; j--) {
            right = max(right, arr[j]);
        }

        cnt += max(0, min(left, right) - arr[pointer]);
        // ���� ���� �ٴ��� 0 �̾�� �Ѵ�.
        // ���� left right�� min �� ����, ���� �����Ͱ� ����Ű�� ������ ũ�ٸ�, ������ �����״ϱ�
        // ���Ѽ��� 0���� �����ϱ����� max�� �����.
    }

    cout << cnt;

    return 0;
}
