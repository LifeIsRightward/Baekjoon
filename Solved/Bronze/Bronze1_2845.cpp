#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int L, P, Tmp = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> L >> P;

    for (int i = 0; i < 5; i++) {
        cin >> Tmp;
        cout << Tmp - (L * P) << "\n";
    }

    return 0;
}
