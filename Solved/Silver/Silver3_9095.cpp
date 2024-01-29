#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vec(12);
    int testcase, temp = 0;

    cin >> testcase;

    vec[1] = 1;
    vec[2] = 2;
    vec[3] = 4;

    for (int i = 4; i < 12; i++) {
        vec[i] = vec[i - 3] + vec[i - 2] + vec[i - 1];
    }

    for (int k = 0; k < testcase; k++) {
        cin >> temp;
        cout << vec[temp] << "\n";
    }
    return 0;
}
