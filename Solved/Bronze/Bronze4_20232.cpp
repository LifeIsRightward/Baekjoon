#include <iostream>
#include <string>

using namespace std;

#define FASTIO                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cout.tie(NULL);                                                                                                                                            \
    cin.tie(NULL);

int y = 0;

int main() {
    FASTIO;

    cin >> y;

    if (y == 1996 || y == 1997 || y == 2000 || y == 2007 || y == 2008 || y == 2013 || y == 2018) {
        cout << "SPbSU";
    } else if (y == 2006) {
        cout << "PetrSU, ITMO";
    } else {
        cout << "ITMO";
    }

    return 0;
}