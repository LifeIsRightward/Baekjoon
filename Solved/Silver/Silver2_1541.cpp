#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<char> oprand(26);
vector<int> num(26);
// int index = 0;
// ù �����Ҷ��� ��� 0��° �����̴ϱ� -1��°�� ������ �ʴ� �����ڰ� �ִٰ� ����.
int latestOp = -1;
int ten = 1;
int temp = 0;

void splitOperator(char ch, int idx) {
    if (ch == '+' || ch == '-' || ch == '\0') {
        oprand.push_back(ch);
        int temp = 0;
        for (int i = idx - 1; i > latestOp; i--) {
            temp += (str[i] - '0') * ten;
            ten *= 10;
        }
        // cout << temp << "\n";
        num.push_back(temp);
        latestOp = idx;
        ten = 1;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    getline(cin, str);

    for (int i = 0; i <= str.length(); i++) {
        splitOperator(str[i], i);
    }

    num.erase(remove(num.begin(), num.end(), 0), num.end());
    oprand.erase(remove(oprand.begin(), oprand.end(), '\0'), oprand.end());

    // num�� ���� ���� ����
    // oprand�� ������ ���� ����

    int answer = 0;
    int j = 0;
    bool minusFlag = false;

    answer += num[0];
    for (int i = 1; i < num.size(); i++) {
        if (oprand[j] == '-') {
            minusFlag = true;
        }

        if (minusFlag) {
            temp += num[i];
        } else {
            answer += num[i];
        }
        j++;
    }

    cout << answer - temp;

    return 0;
}
