#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 0;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            str[j] = tolower(str[j]);
        }
        cout << str << "\n";
    }
    return 0;
}
