#include <bits/stdc++.h>

using namespace std;

int permitSpeed = 0;
int Speed = 0;

int main() {
  // FastIO

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> permitSpeed >> Speed;

  if (permitSpeed >= Speed) {
    cout << "Congratulations, you are within the speed limit!" << "\n";
  } else {
    int charge = Speed - permitSpeed;
    int realcharge = 0;
    if (charge >= 1 && charge <= 20) {
      realcharge = 100;
    } else if (charge >= 21 && charge <= 30) {
      realcharge = 270;
    } else if (charge >= 31) {
      realcharge = 500;
    }

    cout << "You are speeding and your fine is $" << realcharge << "." << "\n";
  }

  return 0;
}