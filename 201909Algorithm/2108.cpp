//
// Created by az91t on 2019-11-06.
//

// 최빈값 고민해보기
// 최빈값 중 두 번째로 작은 수 출력
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX 500000 + 1
int num[MAX];

int main() {
    cin.tie();
    int N;
    cin >> N;

    double sum = 0;
    int max = 0, maxValue = 0, cnt[8001][2] = {0,};
    for(int i=0; i<N; i++) {
        cin >> num[i];
        sum += num[i];
        cnt[num[i] + 4000][0] = num[i];
        cnt[num[i] + 4000][1] += 1;
        if(cnt[num[i] + 4000][1] > max) {
            max = cnt[num[i] + 4000][1];
            maxValue = num[i];
        }
    }

    // 여기서 bool compare 넣어서 하면 될 것 같은데 넘 귀찬타
    for(int i=0; i<N; i++) {

    }


    sort(num, num + N);
    int average = round(sum / N),
            center = num[N/2],
            range = num[N-1] - num[0];

    // 산술평균, 중앙값, 최빈값, 범위 순
    cout << average << "\n"
         << center << "\n"
         << maxValue << "\n"
         << range << endl;

    return 0;
}