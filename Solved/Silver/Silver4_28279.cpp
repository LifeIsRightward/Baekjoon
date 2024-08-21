#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int n, tmp, input = 0;
deque<int> dq;

int main() {
    fastIo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;

        switch (tmp) {
        case 1:
            cin >> input;
            dq.push_front(input);
            break;

        case 2:
            cin >> input;
            dq.push_back(input);
            break;

        case 3:
            if (!dq.empty()) {

                cout << dq.front() << "\n";
                dq.pop_front();
                break;

            } else {
                cout << "-1" << "\n";
                break;
            }

        case 4:
            if (!dq.empty()) {

                cout << dq.back() << "\n";
                dq.pop_back();
                break;

            } else {
                cout << "-1" << "\n";
                break;
            }

        case 5:
            cout << dq.size() << "\n";
            break;

        case 6:
            if (!dq.empty()) {
                cout << "0" << "\n";
                break;
            } else {
                cout << "1" << "\n";
                break;
            }

        case 7:
            if (!dq.empty()) {
                cout << dq.front() << "\n";
                break;
            } else {
                cout << "-1" << "\n";
                break;
            }

        case 8:
            if (!dq.empty()) {
                cout << dq.back() << "\n";
                break;
            } else {
                cout << "-1" << "\n";
                break;
            }
        }
    }
    return 0;
}
