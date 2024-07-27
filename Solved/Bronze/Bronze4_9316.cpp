#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 3;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str = "Hello World, Judge";

    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << str << " " << i + 1 << "!" << "\n";
    }

    return 0;
}
