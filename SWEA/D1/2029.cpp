#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int t = 0;
int a, b = 0;

int main() {
    fastIo;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << "#" << i + 1 << " " << (a / b) << " " << (a % b) << "\n";
    }
    return 0;
}