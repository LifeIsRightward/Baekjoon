#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int avable = 0;
    int temp = 0;
    vector<int> num;

    cin >> avable;

    for (int i = 0; i < avable; i++) {
        cin >> temp;
        num.push_back(temp);
    }

    return 0;
}
