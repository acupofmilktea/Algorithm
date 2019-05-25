//
// Created by az91t on 2019-05-25.
//

#include <iostream>
int dp[1001];

int tile(int n) {
    if(n==1) return 1;
    if(n==2) return 3;
    if(dp[n]!=-1) return dp[n];
    dp[n]=(tile(n-2)*2+tile(n-1))%10007;
    //n-2의 경우에 오른쪽에 타일 두개, n-1경우에 오른쪽에 타일 하나
    //타일 두 개 놓는 경우만 2가지 경우(2x2, 1x2)
    return dp[n];
}

int main() {
    int n;
    scanf("%d", &n);
    std::fill(dp, dp+1001, -1);
    printf("%d", tile(n));
    return 0;
}