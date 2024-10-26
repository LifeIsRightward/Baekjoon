#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int t = 0;
int tmp = 0;
double total = 0;

int main() {
    fastIo;

    cin >> t;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> tmp;
            total += tmp;
        }
        cout << "#" << i + 1 << " " << round(total / 10) << "\n";
        total = 0;
    }

    return 0;
}