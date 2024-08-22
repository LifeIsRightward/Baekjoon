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

    // ù ��° �м� �Է�
    cin >> topa >> bottoma;
    // �� ��° �м� �Է�
    cin >> topb >> bottomb;

    // �м��� ���� ���� �и� ���ϱ�
    commonb = bottoma * bottomb;
    // �м��� ���� ���� ���� ���ϱ�
    commont = (topa * bottomb) + (topb * bottoma);

    // ���м� ������ ���� gcd ã��
    getgcd = __gcd(commonb, commont);

    // ���м��� ����鼭, ����ϱ�
    cout << commont / getgcd << " " << commonb / getgcd;
    return 0;
}
