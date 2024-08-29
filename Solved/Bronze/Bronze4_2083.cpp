#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

string tmp;
int age = 0;
int weight = 0;

int main() {
    fastIo;

    while (true) {
        cin >> tmp >> age >> weight;
        if (age + weight == 0) {
            break;
        }

        if (age > 17 || weight >= 80) {
            cout << tmp << " " << "Senior" << "\n";
        } else {
            cout << tmp << " " << "Junior" << "\n";
        }
    }
    return 0;
}
