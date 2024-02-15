#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1;
    string str2;
    vector<vector<int>> dp;

    cin >> str1;
    cin >> str2;

    str1 = "0" + str1;
    str2 = "0" + str2;

    dp.resize(str2.size(), vector<int>(str1.size()));
    // str1�� ���η� ���Ű�, str2�� ���η� ���ű⶧����
    // str2�� ù��°,(��, ����) str1�� �ι�°(��, ����)�� resize ����

    for (int i = 0; i < str2.size(); i++) {
        for (int j = 0; j < str1.size(); j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[j] == str2[i]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // �밢���� ����
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // ���� �ٿ��� ���� ū �� ����
            }
        }
    }

    cout << dp[str2.size() - 1][str1.size() - 1];

    return 0;
}
