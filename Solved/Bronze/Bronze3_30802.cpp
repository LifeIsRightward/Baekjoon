#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 0;
    long long t, p = 0;
    long long tmp = 0;
    vector<long long> closize;

    long long clothesAns = 0;

    long long penA, penB;

    cin >> n;

    for (int i = 0; i < 6; i++) {
        cin >> tmp;
        closize.push_back(tmp);
    }

    cin >> t >> p;

    for (int i = 0; i < 6; i++) {
        if (closize[i] == 0) {

        } else {
            if (closize[i] / t == 0) {
                clothesAns++;
            } else {
                if (closize[i] % t == 0) {
                    clothesAns += (closize[i] / t);
                } else {
                    clothesAns += (closize[i] / t) + 1;
                }
            }
        }
    }

    cout << clothesAns << "\n";
    cout << n / p << " " << n % p;

    // �� ���� ��Ҹ��� t�� �������� ��
    // 1. ��Ȯ�ϰ� t�θ� ���ѵ� ������ ���: ���� 0�� ��� -> 1
    // 2. t�� ���: ���� 0�� �ƴ�����, �������� 0�� ��� -> ��
    // 3. t�� ����ε� ������ ���: ���� 0�� �ƴ�����, �������� 1 �̻��� ��� -> �� +1

    // ���� -> 0�� ������ �ֹ� �� �ʿ䰡 ������ �� ������ ����

    // �̰� �� ��ģ�� ù ��° ���

    // N���� ������ �� / P�ڷ� ���� ... ������
    // P�ڷ� ���� �� ��? -> 2 - 1 ���
    // P�ڷ� ���� ���� �� ������ ���� �� -> 2 - 2 ���

    return 0;
}
