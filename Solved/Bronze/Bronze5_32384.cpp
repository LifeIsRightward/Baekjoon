#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

string str = "LoveisKoreaUniversity";
int n = 0;

int main() {
    fastIo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << str << " ";
    }

    return 0;
}
