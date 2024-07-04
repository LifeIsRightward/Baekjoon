#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A, B, C;

    cin >> A >> B >> C;

    cout << stoi(A) + stoi(B) - stoi(C) << "\n";
    cout << stoi(A + B) - stoi(C) << "\n";

    return 0;
}
