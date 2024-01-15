#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(string &a, string &b);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  string temp;
  cin >> testcase;

  vector<string> strvec;

  for (int i = 0; i < testcase; i++) {
    cin >> temp;
    strvec.push_back(temp);
  }

  sort(strvec.begin(), strvec.end());
  // 중복제거 - 중복제거 이전에 sort가 되어져 있어야 함.(왜냐면 unique함수는
  // 연속된 중복 원소를 벡터의 가장 뒷부분으로 보내버리는 함수이다.)
  // 따라서 unique 함수를 실행하기 전에 sort를 통해 정렬되어 있어야하고
  // unique 실행 후에는 erase를 통해, 뒷 부분을 삭제해주어야한다.
  // unique 함수의 실행이 끝나고, 리턴하는 값은 벡터의 첫 번째 쓰레기 값의
  // 주소이다.
  // 따라서 erase 함수의 시작인자로 unique 함수 자체를 넣어줄 수 있다.
  strvec.erase(unique(strvec.begin(), strvec.end()), strvec.end());
  sort(strvec.begin(), strvec.end(), compare);

  for (auto a : strvec) {
    cout << a << "\n";
  }
  return 0;
}

// 문자열 길이 순 정렬, 길이가 같을 때는 사전식 정렬(알파벳이나 한글 순서 ㅇㅇ)
bool compare(string &a, string &b) {
  if (a.length() == b.length()) {
    return a < b;
  } else {
    return a.length() < b.length();
  }
}