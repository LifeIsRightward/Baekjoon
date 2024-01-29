#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int ModeN(vector<int> arr);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int temp = 0;
  double arithmetic = 0;  // 산술 평균
  int middle = 0;  // 중앙값: N개의 수들을 증가하는 순서로 나열했을 경우
                   // 그 중앙에 위치하는 값
  int mode = 0;   // 최빈값
  int range = 0;  // 범위: 최댓값 - 최솟값
  vector<int> vec;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> temp;
    vec.push_back(temp);
  }

  for (auto a : vec) {
    arithmetic += a;
  }

  // 산술 평균:소수점이하 첫째 자리에서 반올림한 값
  arithmetic = floor((arithmetic / vec.size()) + 0.5);

  // 중앙값
  sort(vec.begin(), vec.end());
  temp = vec.size() / 2;
  middle = vec[temp];

  // 최빈값
  mode = ModeN(vec);

  // 범위
  range = *max_element(vec.begin(), vec.end()) -
          *min_element(vec.begin(), vec.end());

  //   cout << "============="
  //        << "\n";
  cout << (int)arithmetic << "\n";
  cout << middle << "\n";
  cout << mode << "\n";
  cout << range << "\n";
  return 0;
}

int ModeN(vector<int> varr) {
  int answer = 0;
  int maxNum = 0;
  bool isduplication = false;
  vector<int> duplivec;
  // 정수와 해당 정수의 등장 횟수를 저장하기 위한 unordered_map
  unordered_map<int, int> um;

  // 배열을 순회하며 각 숫자의 등장 횟수를 세는 과정
  for (const auto a : varr) {
    um[a]++;
  }

  // unordered_map을 순회하며 최빈값을 찾는 과정
  for (const auto& b : um) {
    if (b.second > maxNum) {  // 현재 등장 횟수가 최빈값보다 큰 경우
      maxNum = b.second;      // 최빈값을 업데이트
      answer = b.first;       // 해당 숫자를 정답으로 설정
      isduplication = false;
    } else if (b.second == maxNum) {  // 현재 등장 횟수가 최빈값과 같은 경우
      isduplication = true;
    }
  }

  if (isduplication) {
    for (auto a : um) {
      if (maxNum == a.second) {
        duplivec.push_back(a.first);
      }
    }
    sort(duplivec.begin(), duplivec.end());
    answer = duplivec[1];
  }

  return answer;
}

// 1 2 3 "4"->중앙값 5 6 7
// 7 / 2 = 3, 3+1 4번째 근데 인덱스니까 3이 맞을듯