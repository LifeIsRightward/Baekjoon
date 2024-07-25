#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 이익
vector<int> benefit;
// 가격
vector<int> price;
// 기회비용 산정을 위한 가장 큰 가격(나를 제외한 가장 큰 이익)
int tmpmax = 0;
// 기회 비용 = 나 제외 물건 이익 max(tmpmax) - 내 가격
vector<int> opcost;
// 순수 이익 = 이익 - (기회 비용 + 가격)
vector<int> purebenefit;

vector<int> sortbenefit;
int tmp = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;

  cin >> n;

  // 이익 입력
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    benefit.push_back(tmp);
    sortbenefit.push_back(tmp);
  }

  sort(sortbenefit.rbegin(), sortbenefit.rend());
  //   cout << "b1" << "\n";

  // 가격 입력
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    price.push_back(tmp);
  }

  //   cout << "b2" << "\n";

  // 기회비용 산정
  for (int i = 0; i < n; i++) {
    // 그럼 그 다음으로 큰 애를 구하여라.. 라고 해야할 듯?

    tmpmax = sortbenefit[0];
    if (tmpmax == benefit[i]) {
      // sortbenefit[0]은 가장 큰 값
      tmpmax = sortbenefit[1];
      // sortbenefitp[1]은 그 다음 으로 큰 값
    }
    opcost.push_back(tmpmax - price[i]);
  }

  //   cout << "b3" << "\n";

  // 순 수익 산정
  for (int i = 0; i < n; i++) {
    purebenefit.push_back(benefit[i] - (opcost[i] + price[i]));
  }
  //   cout << "b4" << "\n";

  for (auto a : purebenefit) {
    cout << a << " ";
  }

  return 0;
}
