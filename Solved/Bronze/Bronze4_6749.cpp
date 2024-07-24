#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int A, B = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> A >> B;

    cout << B + (B - A);

    return 0;
}
