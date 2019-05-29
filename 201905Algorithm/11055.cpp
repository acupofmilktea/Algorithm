//
// Created by az91t on 2019-05-29.
//

#include <iostream>
int series[1001], dp[1001]={0,};
int main() {
    int N, i, j;
    scanf("%d", &N);
    for(i=1; i<=N; i++) {
        scanf("%d", &series[i]);
        dp[i]=series[i];
    }
    int next, maxSum=series[i];
    for(i=1; i<N; i++) {
        next=i;
        for(j=next+1; j<N+1; j++) {
            if(series[j]>series[next]) {
                dp[j]=std::max(dp[j], dp[next]+series[j]);
            }
        }
    }
    for(i=1; i<N+1; i++) {
        if(dp[i]>maxSum) { maxSum = dp[i]; }
    }
    printf("%d", maxSum);
    return 0;
}