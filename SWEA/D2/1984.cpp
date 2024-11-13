#include <bits/stdc++.h>

using namespace std;

int testcase = 0;

vector<int> vec;
int avg = 0;
int tmp = 0;

int main() {

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        vec.clear();
        avg = 0;
        for (int j = 0; j < 10; j++) {
            cin >> tmp;
            vec.push_back(tmp);
        }

        vec.erase(remove(vec.begin(), vec.end(), *max_element(vec.begin(), vec.end())), vec.end());
        vec.erase(remove(vec.begin(), vec.end(), *min_element(vec.begin(), vec.end())), vec.end());

        for (auto a : vec) {
            avg += a;
            cout << a << " ";
        }

        cout << '\n';

        cout << "#" << i + 1 << " " << round(avg / vec.size()) << "\n";
    }
    return 0;
}