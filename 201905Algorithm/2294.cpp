//
// Created by az91t on 2019-05-28.
//
//나중에 다시 풀어보기
//혼자할 수 있을까?

#include <iostream>
#define IMPOSSIBLE 100000000;
using namespace std;
int main() {
    int n, k, i, j;
    cin>>n>>k;
    int coin[101], dp[101][101];
    for(i=0; i<n; i++) {
        cin>>coin[i];
    }
    for(i=0; i<=n; i++) {
        for(j=0; j<=k; j++) {
            dp[i][j]=IMPOSSIBLE;
        }
    }
    for(i=0; i<n; i++) {
        dp[i][0]=0;
        for(j=0; j<=k; j++) {
            dp[i+1][j]=min(dp[i+1][j], dp[i][j]);
            int jj=j+coin[i];
            if(jj<=k) dp[i][jj]=min(dp[i][jj], dp[i][j]+1);
            //기존 j에서 동전하나 추가 하는 거랑 j+coin[i]중에서 최소
            //최소값으로 따져야 하므로 dp요소로 -1이 들어갈 수 없다
        }
    }
    if(dp[n-1][k]==IMPOSSIBLE) printf("1");
    else printf("%d", dp[n-1][k]);
    return 0;
}