#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int main() {
    fastIo;

    int t = 0;
    int n, m = 0;
    int total = 0;

    cin >> t;

    for (int i = 0; i < t; i++) {
        n, m, total = 0;

        cin >> n >> m;
        int arr[n][n];

        // 배열 입력 받기
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> arr[j][k];
            }
        }

        vector<int> vec;

        int xpos, ypos = 0;

        for (int i = xpos; i < n - m; i++) {
        }

        // for (int j = 0; j < n - m; j++) {
        //     for (int q = j; q < j + m; q++) {
        //         for (int f = j; f < j + m; f++) {
        //             total += arr[q][f];
        //         }
        //     }
        //     vec.push_back(total);
        // }
        // cout << *max_element(vec.begin(), vec.end()) << "\n";
    }

    return 0;
}