#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int main() {
    fastIo;

    string str;

    cin >> str;

    for (auto a : str) {

        cout << a - 'A' + 1 << " ";
    }

    return 0;
}
