//
// Created by az91t on 2019-11-05.
//

#include <iostream>
#include <algorithm>
using namespace std;

// 참고: https://plzrun.tistory.com/entry/Knapsack-DP-%EA%B8%B0%EB%B3%B8%ED%8E%B81

int main() {
    int item, cap;
    cin >> item >> cap;

    int cost[102]={0,}, value[102]={0,}, dp[100002]={0,};
    for(int i=0; i<item; i++) {
        cin >> cost[i] >> value[i];
    }

    for(int i=0; i<item; i++) {
        for(int j=cap; j>=cost[i]; j--)
            dp[j] = max(dp[j], dp[j-cost[i]]+value[i]);
    }

    cout << dp[cap] << endl;
    return 0;
}