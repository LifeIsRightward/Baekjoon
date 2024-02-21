#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase = 0;
    int n = 0;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        int result = 1;
        cin >> n;
        map<string, int> f1;
        // 의상종류, 해당 의상이 몇 개 있느냐
        string name, kind;
        for (int j = 0; j < n; j++) {
            cin >> name >> kind;
            if (f1.find(kind) != f1.end()) {
                // 같은 종류의 의상이 map에 있으면, ++ 시켜줌
                f1[kind]++;
            } else {
                // 같은 종류의 의상이 map에 없으면, 1로 초기화
                f1[kind] = 1;
            }
        }

        auto iter = f1.begin();
        for (; iter != f1.end(); iter++) {
            result *= (iter->second) + 1;
        }

        cout << result - 1 << "\n";
    }

    return 0;
}
