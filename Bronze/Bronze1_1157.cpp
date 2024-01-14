#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    vector<int> vec(27, 0);
    int cnt = 0;

    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
        // cout << str[i] - '@' << "\n";
        //@ �̰� 64 �빮�� A�� 65 ����
        vec[str[i] - '@']++;
    }

    int maxval = *max_element(vec.begin(), vec.end());
    int maxindex = max_element(vec.begin(), vec.end()) - vec.begin();

    for (auto a : vec) {
        if (a == maxval) {
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << "?";
    } else {
        cout << (char)(maxindex + '@');
    }
    return 0;
}
