#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M = 0;
    map<string, string> tempmap;
    string tempstr;
    string tempstr2;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> tempstr >> tempstr2;
        tempmap.insert({tempstr, tempstr2});
    }

    for (int j = 0; j < M; j++) {
        cin >> tempstr;
        cout << tempmap.find(tempstr)->second << "\n";
    }
    return 0;
}
