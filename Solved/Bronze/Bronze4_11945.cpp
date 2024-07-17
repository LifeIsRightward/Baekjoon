#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N = 0;
    string str;

    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        cin >> str;
        for (int j = str.length() - 1; j >= 0; j--) {
            cout << str[j];
        }
        cout << "\n";
    }
    return 0;
}
