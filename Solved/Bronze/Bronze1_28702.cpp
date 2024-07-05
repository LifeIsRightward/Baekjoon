#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int catchNum = 0;
int locateNum = 0;
int locate = 0;

string tmpstr;

int findNum(int catchNum, int locate) { return catchNum + (4 - locate); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 1; i <= 3; i++) {
    cin >> tmpstr;

    // 입력된 문자열이 순수 문자열인지, 숫자 문자열인지를 하나하나 탐색
    for (auto a : tmpstr) {
      if (isdigit(a)) {
        // 숫자면(첫 글자가 숫자라면, 숫자겠지)
        catchNum = stoi(tmpstr);
        locateNum = findNum(catchNum, i);
        break;
      }
    }
  }

  // 숫자까지는 찾음(마지막 문자열 다음 숫자)
  //   cout << locateNum << "\n";

  if (locateNum % 3 == 0) {
    if (locateNum % 5 == 0) {
      cout << "FizzBuzz";
    } else {
      cout << "Fizz";
    }
  } else {
    if (locateNum % 5 == 0) {
      cout << "Buzz";
    } else {
      cout << locateNum;
    }
  }

  return 0;
}
