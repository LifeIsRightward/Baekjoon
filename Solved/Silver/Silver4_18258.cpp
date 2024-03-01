#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

queue<int> q;

void push(int n) { q.push(n); }
void pop() {
  if (!q.empty()) {
    cout << q.front() << "\n";
    q.pop();
  } else {
    cout << "-1"
         << "\n";
  }
}
void size() { cout << q.size() << "\n"; }
void empty() {
  if (!q.empty()) {
    cout << "0"
         << "\n";
  } else {
    cout << "1"
         << "\n";
  }
}

void front() {
  if (!q.empty()) {
    cout << q.front() << "\n";
  } else {
    cout << "-1"
         << "\n";
  }
}

void back() {
  if (!q.empty()) {
    cout << q.back() << "\n";
  } else {
    cout << "-1"
         << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int order = 0;
  cin >> order;

  string str;
  int temp = 0;
  for (int i = 0; i < order; i++) {
    cin >> str;
    if (str == "push") {
      cin >> temp;
      push(temp);
    } else if (str == "pop") {
      pop();
    } else if (str == "size") {
      size();
    } else if (str == "empty") {
      empty();
    } else if (str == "front") {
      front();
    } else if (str == "back") {
      back();
    }
  }

  return 0;
}
