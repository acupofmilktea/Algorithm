//
// Created by az91t on 2019-11-05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rope[100001];
    for(int i=0; i<N; i++)
        cin >> rope[i];

    sort(rope, rope+N);

    int ans=0;
    for(int i=0; i<N; i++) {
        ans = max(ans, rope[i]*(N-i));
    }
    // 정렬해줘서 가능한 것

    cout << ans << endl;
    return 0;
}