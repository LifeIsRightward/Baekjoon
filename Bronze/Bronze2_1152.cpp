#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int count = 0;

  getline(cin, str);

  //   걍 문자가 없고 공백인거는 0 처리 박아버림, 뒤에건 볼 필요도 없고 ㅇㅇ
  if (str.empty()) {
    cout << "0";
    return 0;
  }
  // 단어가 1개 이상 있으면서, 공백기준으로 분리하기에 + 1 해줌(단어니까 + 1)
  count = 1;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      count++;
    }
  }

  // 맨 앞에 공백이 존재할시 count 차감
  if (str[0] == ' ') {
    count--;
  }
  // 맨 뒤에 공백이 존재할시 count 차감
  if (str[str.length() - 1] == ' ') {
    count--;
  }

  cout << count;
  return 0;
}

// #include <cctype>
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int count = 0;
//   string str;
//   getline(cin, str);

//   for (int i = 0; i < str.length(); i++) {
//     if (isspace(str[i])) {
//       // 맨 앞이나 뒤가 공백일 경우의 처리
//       if (i == 0 || i == str.length() - 1) {
//       } else {
//         count++;
//       }
//     }
//   }

//   if (count == 0 && str.length() > 1) {
//     cout << count + 1;
//   } else if (count == 0 && str.length() < 2) {
//     cout << count;
//   } else if (count == 0 && !isspace(str[0]) && str.length() == 1) {
//     cout << count + 1;
//   } else {
//     cout << count + 1;
//   }

//   return 0;
// }
