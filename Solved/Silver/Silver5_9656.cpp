#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    cin >> n;

    if (n % 2 != 0) {
        cout << "CY";
    } else {
        cout << "SK";
    }
    return 0;
}
