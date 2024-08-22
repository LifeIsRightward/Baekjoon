#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int topa, bottoma, topb, bottomb = 0;
int commonb, commont = 0;
int getgcd = 0;

int main() {
    fastIo;

    cin >> topa >> bottoma;
    cin >> topb >> bottomb;

    commonb = bottoma * bottomb;
    commont = (topa * bottomb) + (topb * bottoma);

    getgcd = __gcd(commonb, commont);

    cout << commont / getgcd << " " << commonb / getgcd;
    return 0;
}
