#include <bits/stdc++.h>

using namespace std;

string str;

int main() {

    cin >> str;

    if (!str.compare("fdsajkl;") || !str.compare("jkl;fdsa")) {
        cout << "in-out";
    } else if (!str.compare("asdf;lkj") || !str.compare(";lkjasdf")) {
        cout << "out-in";
    } else if (!str.compare("asdfjkl;")) {
        cout << "stairs";
    } else if (!str.compare(";lkjfdsa")) {
        cout << "reverse";
    } else {
        cout << "molu";
    }

    return 0;
}