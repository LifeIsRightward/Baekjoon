#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, standard, gcd, tmp = 0;

    cin >> n;
    cin >> standard;

    for (int i = 0; i < n - 1; i++) {
        cin >> tmp;
        gcd = __gcd(standard, tmp);
        cout << standard / gcd << "/" << tmp / gcd << "\n";
    }

    return 0;
}
