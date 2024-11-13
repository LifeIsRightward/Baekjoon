#include <bits/stdc++.h>
using namespace std;

int days = 0;
int tmp = 0;
long long total = 0;

vector<int> invec;
int cntvec[2000001];

int main() {

    cin >> days;

    for (int i = 0; i < days; i++) {
        cin >> tmp;
        invec.push_back(tmp);
    }

    if (invec[0] == 0) {
        cntvec[0] = -1;
    } else {
        cntvec[0] = 1;
    }

    for (int j = 1; j < days; j++) {
        if (invec[j] == 0) {
            cntvec[j] = cntvec[j - 1] - 1;
        } else {
            cntvec[j] = cntvec[j - 1] + 1;
        }
    }

    for (auto a : cntvec) {
        total += a;
    }

    cout << total;

    return 0;
}
