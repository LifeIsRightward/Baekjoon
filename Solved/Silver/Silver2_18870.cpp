#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long N = 0;
  long long temp = 0;
  cin >> N;

  vector<long long> vec(N, 0);

  for (int i = 0; i < N; i++) {
    cin >> temp;
    vec[i] = temp;
  }

  // 좌표 압축을 한다: 해당 좌표의 값을 그 값보다 작은 좌표값들의 개수로
  // 대체한다는 의미

  // 원본 벡터를 복사
  vector<long long> ans(vec);
  // 복사한 ans 벡터를 정렬
  sort(ans.begin(), ans.end());
  // unique함수를 쓰면 중복되는 값들을 중복되지 않는 값들의 뒤로 밀어준다.
  // 그때 unique는  중복처리로 뒤로 미룬 첫 번째 위치를 반환한다.
  // 거기서부터 end까지 erase 시키겠다 -> 중복되는 것들을 삭제하겠다.
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  // 그렇게 되면, 중복이 제거된 값들을 가르키는 인덱스는
  // 해당 값 보다 작은 값들의 갯수가 된다.
  // 즉 인덱스를 출력하면 된다는 뜻이다.(해당 값을 가르키는 인덱스 번호 ㅇㅇ)

  // 그래서 이터레이터를 두고 찾는 방법을 기용했다.
  // find를 사용해서 val에 해당하는 값을 begin부터 end까지 찾아서 이터레이터를
  // 반환받는다.

  // 이후에 distance 함수를 이용해서 it(find로 찾은 이터레이터)가 가리키는 값이
  // ans 벡터애서 몇 번째 인덱스인지 계산할 수 있게 해준다.
  for (int i = 0; i < N; i++) {
    auto it = lower_bound(ans.begin(), ans.end(), vec[i]);
    cout << it - ans.begin() << " ";
  }

  return 0;
}
