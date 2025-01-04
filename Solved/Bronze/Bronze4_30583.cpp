#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[2] = {0, 0};
    int a, b = 0;
    string str;

    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> str;
        for (auto a : str) {
            if (a == '1') {
                arr[1]++;
            } else {
                arr[0]++;
            }
        }
    }

    if (arr[0] > arr[1]) {
        cout << arr[1] << "\n";
    } else if (arr[0] < arr[1]) {
        cout << arr[0] << "\n";
    } else {
        // 둘 다 같을 경우
        cout << arr[0] << "\n";
    }

    return 0;
}