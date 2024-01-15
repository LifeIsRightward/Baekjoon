#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b = 0;
    cin >> a >> b;
    cout << ((b * (b + 1)) / 2) - ((a * (a + 1)) / 2) + a;
    return 0;
}
