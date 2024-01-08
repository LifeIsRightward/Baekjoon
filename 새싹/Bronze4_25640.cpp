#include <iostream>
#include <string>
#include <vector>
using namespace std;

// enum class MBTI {
//   INFP,
//   ENFP,
//   ISFP,
//   ESFP,
//   INTP,
//   ENTP,
//   ISTP,
//   ESTP,
//   INFJ,
//   ENFJ,
//   ISFJ,
//   ESFJ,
//   INTJ,
//   ENTJ,
//   ISTJ,
//   ESTJ,
// };

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int count = 0;
  int repeat = 0;
  string MainCharacter, SubCharacter;

  cin >> MainCharacter;
  cin >> repeat;

  while (repeat) {
    cin >> SubCharacter;
    if (MainCharacter.compare(SubCharacter) == 0) {
      count++;
    }
    repeat--;
  }

  cout << count << "\n";
  return 0;
}
