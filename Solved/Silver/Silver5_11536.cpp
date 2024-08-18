#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

string decr = "DECREASING";
string incr = "INCREASING";
string neit = "NEITHER";

int n = 0;
string tmp;
vector<string> vec;
vector<string> incvec;
vector<string> decvec;

bool incflag = true;
bool decflag = true;
int cnt = 0;

int main() {
  fastIo;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    vec.push_back(tmp);
    incvec.push_back(tmp);
    decvec.push_back(tmp);
  }

  sort(incvec.begin(), incvec.end());
  sort(decvec.rbegin(), decvec.rend());

  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] != incvec[i]) {
      incflag = false;
    }

    if (vec[i] != decvec[i]) {
      decflag = false;
    }
  }

  if (incflag) {
    cout << incr;
  } else if (decflag) {
    cout << decr;
  } else if (!incflag && !decflag) {
    cout << neit;
  }

  return 0;
}
