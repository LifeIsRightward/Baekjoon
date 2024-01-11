#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // �����佺�׳׽��� ä
  int M, N = 0;
  cin >> M >> N;

  vector<bool> vec(N + 1, true);
  vec[0] = false;
  vec[1] = false;
  // M ���� �����ϱ� 2�� ����� �Ȱɷ����� ����
  // �������� 2�� ����� ���� ���� �ɸ��ݾ�
  for (int i = 2; i <= N; i++) {
    if (vec[i]) {
      for (int q = i + i; q <= N; q += i) {
        vec[q] = false;
      }
    }
  }

  for (int j = M; j <= N; j++) {
    if (vec[j]) {
      cout << j << "\n";
    }
  }

  return 0;
}