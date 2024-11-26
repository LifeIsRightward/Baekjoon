#include <bits/stdc++.h>

using namespace std;

int main() {
  // FastIO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int score[7];
  double ascore = 0;
  double bscore = 0;
  int tmp = 0;

  score[1] = 13;
  score[2] = 7;
  score[3] = 5;
  score[4] = 3;
  score[5] = 3;
  score[6] = 2;

  for (int i = 1; i <= 6; i++) {
    cin >> tmp;
    ascore += (score[i] * tmp);
  }

  for (int j = 1; j <= 6; j++) {
    cin >> tmp;
    bscore += (score[j] * tmp);
  }

  bscore += 1.5;

  //   cout << "ChoNara: " << ascore << " : " << "HanNara: " << bscore << "\n";

  if (ascore < bscore) {
    cout << "ekwoo" << "\n";
  } else {
    cout << "cocjr0208" << "\n";
  }

  return 0;
}