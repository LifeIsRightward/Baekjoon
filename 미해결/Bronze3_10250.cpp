#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int count = 0;
  int H, W, N = 0;
  int floor, roomNum = 0;

  cin >> count;
  for (int i = 0; i < count; i++) {
    cin >> H >> W >> N;
    floor = N % H;

    if (floor == 0) {
      floor = H;
    }

    roomNum = (N / H) + 1;

    if (roomNum < 10) {
      cout << to_string(floor) + "0" + to_string(roomNum) << "\n";
    } else {
      cout << to_string(floor) + to_string(roomNum) << "\n";
    }
  }

  return 0;
}
