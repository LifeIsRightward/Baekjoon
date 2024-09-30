#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

string str;

int main() {
    fastIo;

    getline(cin, str);

    if ((str[0] - '0') + (str[4] - '0') == (str[8] - '0')) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}
