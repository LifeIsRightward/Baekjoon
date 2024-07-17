#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while (true) {
        getline(cin, str);
        if (str == "END") {
            break;
        }

        for (int j = str.length() - 1; j >= 0; j--) {
            cout << str[j];
        }
        cout << "\n";
    }

    return 0;
}
