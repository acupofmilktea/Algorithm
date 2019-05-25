//
// Created by az91t on 2019-05-25.
//

#include <iostream>
#define mod 1000000000
int dp[10][101];

int main() {
    int n, i, j;
    scanf("%d", &n);

    for(i=0; i<=9; i++) {
        std::fill(dp[i], dp[i]+101, 0);
        dp[i][0]=1;
    }

    if(n==1) {
        printf("9");
        return 0;
    }

    for(i=1; i<=n; i++) {
        for(j=0; j<=9; j++) {
            if(j==0) {
                if(i!=1) {
                    dp[j+1][i]+=dp[j][i-1];
                    dp[j+1][i]%=mod;
                }
            } else if(j==9) {
                dp[j-1][i]+=dp[j][i-1];
                dp[j-1][i]%=mod;
            } else {
                dp[j+1][i]+=dp[j][i-1];
                dp[j-1][i]+=dp[j][i-1];
                dp[j+1][i]%=mod;
                dp[j-1][i]%=mod;
            }
        }
    }

    int sum=0;
    for(i=0; i<=9; i++) {
        sum+=dp[i][n-1];
        sum%=mod;
    }
    sum%=mod;
    printf("%d", sum);
    return 0;
}