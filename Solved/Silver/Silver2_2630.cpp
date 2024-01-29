#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 분할 정복(Divde and Conquer)
int N = 0;          // 전체 종이의 한 변의 길이
int One = 0;        // 1로만 이루어진 파란색 색종이의 갯수
int Zero = 0;       // 0으로만 이루어진 하얀색 색종이의 갯수
int arr[128][128];  // 종이칸

void func(int y, int x, int n);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> arr[i][j];
    }
  }

  func(0, 0, N);
  cout << Zero << "\n";
  cout << One;
  return 0;
}

// 색종이의 시작위치 x,y 와 종이의 한 변의 길이를 n으로 받는다.
void func(int x, int y, int n) {
  // 한 변의 길이가 1일때 재귀함수를 탈출하며, 1이면 One 변수(파랑)의 값을 하나
  // 올려준다
  // 한 변의 길이가 1일때 재귀함수를 탈출하며, 0이면 Zero 변수(하얀)의 값을 하나
  // 올려준다
  if (n == 1) {
    if (arr[x][y] == 1) {
      One++;
    } else {
      Zero++;
    }
    return;
  }

  // 현재 확인하는 부분이, 하나의 숫자로만 이루어져 있는지 확인하기 위한
  //  bool 변수 두 개
  bool z = false;
  bool o = false;

  // 해당 부분이 전부 1인지, 0인지 확인하는 곳
  for (int i = x; i < x + n; i++) {
    for (int j = y; j < y + n; j++) {
      if (arr[i][j] == 1) {
        o = true;  // 전부 1이면 one = true(파랑)
      } else {
        z = true;  // 전부 0이면 zero = true;(하양)
      }
    }
  }

  if (o && !z) {  // 0은 아예 없고, 1만 있음
    One++;
  } else if (z && !o) {  // 1이 아예 없고 0만있음
    Zero++;
  } else {                              // 1과 0 이 섞여있음
    func(x, y, n / 2);                  // 1번구역
    func(x + n / 2, y, n / 2);          // 2번구역
    func(x, y + n / 2, n / 2);          // 3번구역
    func(x + n / 2, y + n / 2, n / 2);  // 4번구역
  }
}