#include <iostream>
#include <string>
#include <vector>
using namespace std;

void add(int X);
void remove(int X);
void check(int X);
void toggle(int X);
void all();
void empty();
bool Find(int F);

vector<int> Svec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  cin >> testcase;

  string str;
  int temp = 0;

  while (testcase--) {
    cin >> str;
    if (str == "add") {
      cin >> temp;
      add(temp);
    } else if (str == "remove") {
      cin >> temp;
      remove(temp);
    } else if (str == "check") {
      cin >> temp;
      check(temp);
    } else if (str == "toggle") {
      cin >> temp;
      toggle(temp);
    } else if (str == "all") {
      all();
    } else if (str == "empty") {
      empty();
    }
    // cout << testcase << "\n";
  }
  return 0;
}

bool Find(int F) {
  bool isExist = false;
  for (int i = 0; i < Svec.size(); i++) {
    if (Svec[i] == F) {
      isExist = true;
    }
  }

  return isExist;
}

void check(int X) {
  bool Fv = Find(X);
  if (Fv) {
    cout << "1"
         << "\n";
  } else {
    cout << "0"
         << "\n";
  }
}

void add(int X) {
  bool Fv = Find(X);
  if (Fv) {
  } else {
    Svec.push_back(X);
  }
}

void remove(int X) {
  bool Fv = Find(X);
  if (Fv) {
    for (int i = 0; i < Svec.size(); i++) {
      if (Svec[i] == X) {
        Svec.erase(Svec.begin() + i);
      }
    }
  }
}

void toggle(int X) {
  bool Fv = Find(X);
  if (Fv) {
    remove(X);
  } else {
    add(X);
  }
}

void all() {
  empty();
  for (int i = 1; i <= 20; i++) {
    Svec.push_back(i);
  }
}

void empty() { Svec.clear(); }