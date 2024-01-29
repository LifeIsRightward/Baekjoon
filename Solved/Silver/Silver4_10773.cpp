#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  stack<int> st;
  int N = 0;
  int temp = 0;
  int result = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    if (temp == 0) {
      if (!st.empty()) {
        st.pop();
      }
    } else {
      st.push(temp);
    }
  }

  while (!st.empty()) {
    result += st.top();
    st.pop();
  }

  cout << result;

  return 0;
}
