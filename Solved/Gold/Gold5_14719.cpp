#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, W; // H 높이, W 가로
    cin >> H >> W;

    int arr[W]; // W 길이의 배열 선언

    // arr 초기화
    for (int i = 0; i < W; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    // left, right

    int pointer = 0;

    // 맨 앞(start) 랑 맨 뒤(end)는 볼 필요가 없음
    // 그래서 for문 조건이 1 ~ W-1임
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
        // 가장 낮은 바닥이 0 이어야 한다.
        // 가령 left right의 min 값 보다, 현재 포인터가 가르키는 영역이 크다면, 음수가 나올테니까
        // 하한선이 0임을 보장하기위해 max를 써줬다.
    }

    cout << cnt;

    return 0;
}
