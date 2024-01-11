#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T, M = 0;
  cin >> T >> M;

  // 애시 당초에 45분을 빼도 남은 N분이 0분 보다 크다면, 그냥 출력해도됨
  if (M - 45 >= 0) {
    cout << T << " " << M - 45;
  } else {  // 45분을 뺐을때 음수가 나오는 경우, 즉 시각을 하나 줄이고
    // 분을 + 60을 해줌
    M = M - 45 + 60;
    // 시각을 하나 줄임
    T = T - 1;
    // 줄인 시각이 0시 ~ 23시 안에 있다면, 줄인 시각과 수정된 분을 그대로
    // 출력하면 됨.
    if (T >= 0) {
      cout << T << " " << M;
    } else {  // 그러나, 줄인 시각이 0 시보다 작은 즉, 음수(전날로
              // 넘어가는것이다.) 일 경우에는 23시로 세팅해준다.
      T = 23;
      cout << T << " " << M;
    }
  }

  return 0;
}
