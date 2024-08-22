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

    // 첫 번째 분수 입력
    cin >> topa >> bottoma;
    // 두 번째 분수 입력
    cin >> topb >> bottomb;

    // 분수의 합을 위한 분모 구하기
    commonb = bottoma * bottomb;
    // 분수의 합을 위한 분자 구하기
    commont = (topa * bottomb) + (topb * bottoma);

    // 기약분수 제조를 위한 gcd 찾기
    getgcd = __gcd(commonb, commont);

    // 기약분수로 만들면서, 출력하기
    cout << commont / getgcd << " " << commonb / getgcd;
    return 0;
}
