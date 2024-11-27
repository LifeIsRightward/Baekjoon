#include <iostream>
#include <string>

using namespace std;

int main() {

    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char tmp;

    while (cin >> tmp) {
        if (tmp == 'w') {
            cout << "chunbae" << "\n";
            break;
        } else if (tmp == 'b') {
            cout << "nabi" << "\n";
            break;
        } else if (tmp == 'g') {
            cout << "yeongcheol" << "\n";
            break;
        }
    }

    return 0;
}