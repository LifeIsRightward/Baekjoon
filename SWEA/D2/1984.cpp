#include <bits/stdc++.h>

using namespace std;

int testcase = 0;

vector<int> vec;
double avg = 0;
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

    // 이게 값으로 전달해야 하는데, remove에서 바로 *이걸로 넘겨버리면
    // 포인터 주소를 넘기는 거라서 사실
    // 값으로 대치 시켜서 집어넣는게 맞다고 한다
    int maxele = *max_element(vec.begin(), vec.end());
    int minele = *min_element(vec.begin(), vec.end());

    vec.erase(remove(vec.begin(), vec.end(), maxele), vec.end());
    vec.erase(remove(vec.begin(), vec.end(), minele), vec.end());

    for (auto a : vec) {
      avg += a;
      //   cout << a << " ";
    }

    cout << "#" << i + 1 << " " << round(avg / vec.size()) << "\n";
  }
  return 0;
}