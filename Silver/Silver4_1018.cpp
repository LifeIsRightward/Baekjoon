#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M = 0;

    vector<string> Wtype(2);
    Wtype[0] = "WBWBWBWB";
    Wtype[1] = "BWBWBWBW";

    string temp;
    int min = 64;
    int count = 0;

    cin >> N >> M;

    vector<string> svec;
    vector<string> newvec;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        svec.push_back(temp);
    }

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            count = 0;
            for (int q = 0; q < 8; q++) {
                for (int k = 0; k < 8; k++) {
                    if (svec[i + q][j + k] != Wtype[q % 2][k]) {
                        count++;
                    }
                }
            }
            if (min > count) {
                min = count;
            }
            count = 64 - count;
            if (min > count) {
                min = count;
            }
        }
    }

    cout << min;
    return 0;
}
