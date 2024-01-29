#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b = 0;

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        } else {
            if (a > b) {
                cout << "Yes"
                     << "\n";
            } else if (a < b) {
                 cout << "No"
                     << "\n";
            } else {
                cout << "No"
                     << "\n";
            }
        }
    }

    return 0;
}