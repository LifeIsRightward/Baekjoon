#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

string str;
int total = 0;

int main() {
    fastIo;

    cin >> str;
    for (auto a : str) {
        total += a - '0';
    }

    cout << total;
    return 0;
}