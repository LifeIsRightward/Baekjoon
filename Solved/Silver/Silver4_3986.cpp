#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        stack<char> stk1;

        cin >> str;

        for (int j = 0; j < str.length(); j++) {
            if (stk1.empty()) {
                stk1.push(str[j]);
            } else {
                if (stk1.top() == str[j]) {
                    stk1.pop();
                } else {
                    stk1.push(str[j]);
                }
            }
        }

        if (stk1.empty()) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
