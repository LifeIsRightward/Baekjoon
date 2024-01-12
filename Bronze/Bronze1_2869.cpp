#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int afternoon = 0;
  int night = 0;
  int dest = 0;
  int daycnt = 1;
  int daylate = 0;

  cin >> afternoon >> night >> dest;

  dest = dest - afternoon;

  daycnt += dest / (afternoon - night);
  daylate = dest % (afternoon - night);

  if (daylate != 0) {
    daycnt++;
  }
  cout << daycnt;
  return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// 시간초과 뜸 ㅋㅋ
// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int afternoon = 0;
//   int night = 0;
//   int dest = 0;

//   int present = 0;
//   int date = 1;

//   bool isnight = false;

//   cin >> afternoon >> night >> dest;

//   while (true) {
//     if (present >= dest) {
//       cout << date;
//       break;
//     }

//     if (!isnight) {
//       // 낮이라면
//       present += afternoon;
//       isnight = true;
//     } else {
//       present -= night;
//       isnight = false;
//       date++;
//     }
//   }
//   return 0;
// }
