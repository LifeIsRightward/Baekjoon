#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b = 0;

    while (true) {
        cin >> a >> b;
        if (a + b == 0) {
            break;
        }

        cout << a + b << "\n";
    }
    return 0;
}
