#include <bits/stdc++.h>

using namespace std;

double PI = 3.141592;

int main() {

    double area = 0;

    cin >> area;

    cout.precision(10);
    cout << sqrt((area / PI)) * 2 * PI;
    cout << "\n";

    return 0;
}