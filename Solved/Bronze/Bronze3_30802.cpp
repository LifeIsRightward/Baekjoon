#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 0;
    long long t, p = 0;
    long long tmp = 0;
    vector<long long> closize;

    long long clothesAns = 0;

    long long penA, penB;

    cin >> n;

    for (int i = 0; i < 6; i++) {
        cin >> tmp;
        closize.push_back(tmp);
    }

    cin >> t >> p;

    for (int i = 0; i < 6; i++) {
        if (closize[i] == 0) {

        } else {
            if (closize[i] / t == 0) {
                clothesAns++;
            } else {
                if (closize[i] % t == 0) {
                    clothesAns += (closize[i] / t);
                } else {
                    clothesAns += (closize[i] / t) + 1;
                }
            }
        }
    }

    cout << clothesAns << "\n";
    cout << n / p << " " << n % p;

    // 각 벡터 요소마다 t로 나누었을 때
    // 1. 정확하게 t로만 시켜도 괜찮은 경우: 몫이 0인 경우 -> 1
    // 2. t의 배수: 몫이 0이 아니지만, 나머지가 0인 경우 -> 몫
    // 3. t의 배수인데 부족한 경우: 몫이 0이 아니지만, 나머지가 1 이상인 경우 -> 몫 +1

    // 예외 -> 0이 들어오면 주문 할 필요가 없어짐 옷 묶음을 ㅇㅇ

    // 이걸 다 합친게 첫 번째 출력

    // N명의 참가자 수 / P자루 묶음 ... 나머지
    // P자루 묶음 몇 개? -> 2 - 1 출력
    // P자루 묶음 구매 후 나머지 낱개 펜 -> 2 - 2 출력

    return 0;
}
