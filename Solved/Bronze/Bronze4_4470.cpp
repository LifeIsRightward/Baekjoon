#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int n = 0;
string str;

int main() {
    fastIo;

    cin >> n;

    // �����˱�δ�, �Է¹����� ���� ('\n')�� �Է¹��ۿ� ���Եȴٰ� �˰�����
    // �׷��� n�� ���� �ް� n�� ���� ����ǰ� �Է¹��ۿ��� ���Ͱ� ���Ե�.
    // �׷��� ���Ŀ� str ������ 1���� �Է� ���õǴ� ��찡 �߻��ϴµ�
    // �� ������, n�� �Է¹����� ���� ���ۿ� �����ִ� ����('\n')�� ���������
    // cin.ignore()�� ���ذ��� ����
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        getline(cin, str);
        cout << i << ". " << str << "\n";
    }
    return 0;
}
