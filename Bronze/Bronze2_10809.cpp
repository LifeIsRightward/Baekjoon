#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    string strcmp = "abcdefghijklmnopqrstuvwxyz";

    getline(cin, str);
    // cout << str << "\n";
    // cout << strcmp;

    for (int i = 0; i < strcmp.size(); i++) {
        if (str.find(strcmp[i]) == str.npos) {
            cout << "-1"
                 << " ";
        } else {
            cout << str.find(strcmp[i]) << " ";
        }
    }
    return 0;
}
