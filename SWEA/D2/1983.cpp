#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int stdnum, k = 0;
int mid, last, work = 0;
double tmp;
int grdIndex = 0;
vector<pair<double, int>> vec;

int main() {
  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> stdnum >> k;
    vec.clear();
    for (int j = 1; j <= stdnum; j++) {
      cin >> mid >> last >> work;
      tmp = (mid * 0.35) + (last * 0.45) + (work * 0.2);
      // sort는 앞에 first 기준으로 먼저 되고, tmp가 동일할 경우에는 j를 본다고
      // 하네 ㅇㅇ
      vec.push_back(make_pair(tmp, j));
    }

    sort(vec.rbegin(), vec.rend());

    grdIndex = 1;
    for (auto a : vec) {
      if (a.second != k) {
        grdIndex++;
      } else {
        break;
      }
    }

    // for (auto b : vec) {
    //   cout << b.first << " : " << b.second << "\n";
    // }

    int grdstd = stdnum / 10;

    // cout << "grdIndex: " << grdIndex << "\n";
    // cout << "grdStd: " << grdstd << "\n";
    cout << "#" << i + 1 << " ";

    if (grdIndex >= 1 && grdIndex <= grdstd) {
      cout << "A+" << '\n';
    } else if (grdIndex > grdstd && grdIndex <= 2 * grdstd) {
      cout << "A0" << '\n';
    } else if (grdIndex > 2 * grdstd && grdIndex <= 3 * grdstd) {
      cout << "A-" << '\n';
    } else if (grdIndex > 3 * grdstd && grdIndex <= 4 * grdstd) {
      cout << "B+" << '\n';
    } else if (grdIndex > 4 * grdstd && grdIndex <= 5 * grdstd) {
      cout << "B0" << '\n';
    } else if (grdIndex > 5 * grdstd && grdIndex <= 6 * grdstd) {
      cout << "B-" << '\n';
    } else if (grdIndex > 6 * grdstd && grdIndex <= 7 * grdstd) {
      cout << "C+" << '\n';
    } else if (grdIndex > 7 * grdstd && grdIndex <= 8 * grdstd) {
      cout << "C0" << '\n';
    } else if (grdIndex > 8 * grdstd && grdIndex <= 9 * grdstd) {
      cout << "C-" << '\n';
    } else if (grdIndex > 9 * grdstd && grdIndex <= 10 * grdstd) {
      cout << "D0" << '\n';
    }
  }

  return 0;
}