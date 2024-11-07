#include <iostream>
#include <string>

using namespace std;

string str;
int cnt = 0;

int main() {

    cin >> str;

    // compare은 똑같을 때 0, 다를때 1을 반환한다
    for (int i = 0; i < str.length(); i++) {
        if (!str.substr(i, 4).compare("DKSH")) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}