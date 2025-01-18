#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc = 0;
    while (true) {
        cin >> tc;
        if (tc == 0) {
            break;
        }
        stack<int> stk;
        int tmp = 0;
        for (int i = 0; i < tc; i++) {
            cin >> tmp;
            stk.push(tmp);
        }

        while (!stk.empty()) {
            cout << stk.top() << "\n";
            stk.pop();
        }
    }
}