#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true) {
    string str;
    stack<char> st;
    bool isBalanced = true;
    getline(cin, str);

    if (str.length() == 1 && str[0] == '.') {
      break;
    }

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == '(' || str[i] == '[') {
        st.push(str[i]);
      }

      if (str[i] == ']') {
        if (st.empty() || st.top() == '(') {
          isBalanced = false;
        } else {
          st.pop();
        }
      }
      if (str[i] == ')') {
        if (st.empty() || st.top() == '[') {
          isBalanced = false;
        } else {
          st.pop();
        }
      }
    }

    if (st.empty() && isBalanced) {
      cout << "yes"
           << "\n";
    } else {
      cout << "no"
           << "\n";
    }
  }

  return 0;
}
