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

    // 내가알기로는, 입력받을때 엔터 ('\n')가 입력버퍼에 남게된다고 알고있음
    // 그래서 n의 값을 받고 n의 값만 저장되고 입력버퍼에는 엔터가 남게돼.
    // 그래서 이후에 str 받을때 1번이 입력 무시되는 경우가 발생하는데
    // 이 때문에, n을 입력받을때 아직 버퍼에 남아있는 엔터('\n')를 지우기위해
    // cin.ignore()을 써준거임 ㅇㅇ
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        getline(cin, str);
        cout << i << ". " << str << "\n";
    }
    return 0;
}
