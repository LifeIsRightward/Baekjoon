#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase = 10;
    int temp = 0;
    int cnt = 0;
    vector<int> vec(1001, 0);

    for (int i = 0; i < 10; i++) {
        cin >> temp;
        vec[temp % 42]++;
    }

    for (int j = 0; j < vec.size(); j++) {
        if (vec[j] != 0) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
